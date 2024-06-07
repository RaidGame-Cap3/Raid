// Fill out your copyright notice in the Description page of Project Settings.


#include "RaidGame/Character/Attributes/BaseAttributeSet.h"
#include "RaidGame/Character/BaseCharacter.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
//#include "RaidAbilitySystemComponent.h"
//#include UE_INLINE_GENERATED_CPP_BY_NAME(raidAttributeSet)

UBaseAttributeSet::UBaseAttributeSet()
{
	//URaidAbilitySystemComponent* GetRaidAbilitySystemComponent() const;
}

/*
UAbilitySystemComponent* URaidAttributeSet::GetRaidAbilitySystemComponent() const
{
	return Cast<URaidAbilitySystemComponent>(GetOwningAbilitySystemComponent());
}*/




// ������ ��ó��
// ��Ʈ����Ʈ ���� ���� �ϱ� ���� �ִ밪�� ���� Ȯ��
void UBaseAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) {
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetMaxHealthAttribute())
		AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());

	else if (Attribute == GetMaxManaAttribute())
		AdjustAttributeForMaxChange(Mana, MaxMana, NewValue, GetManaAttribute());

	else if (Attribute == GetMoveSpeedAttribute())
	{
		// Cannot slow less than 150 units/s and cannot boost more than 1000 units/s
		NewValue = FMath::Clamp<float>(NewValue, 150, 1000);
	}
}

//������ ��ó��
void UBaseAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) {
}

// ����Ʈ ���� ��ó��
bool UBaseAttributeSet::PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) {

	if (!Super::PreGameplayEffectExecute(Data))
	{
		return false;
	}
	return true;

}

// ����Ʈ ���� ��ó��
void UBaseAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) {
	Super::PostGameplayEffectExecute(Data);

	//���� �������(God Mode)�� �ʿ�� �� ������ �����ϸ� ��
	float MinimumValue = 0.0f;


	//������ ���� ����Ʈ�� �߻���Ų Context
	FGameplayEffectContextHandle EffectContext = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = EffectContext.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssetTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssetTags);


	// Get the Target actor, which should be our owner
	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
	ABaseCharacter* TargetCharacter = nullptr;

	//GetOriginalInstigator()�� �ʿ����� GetOriginalInstigatorAbilitySystemComponent()�� �ʿ������� ���� ����
	AActor* Instigator = EffectContext.GetOriginalInstigator();
	AActor* Causer = EffectContext.GetEffectCauser();
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		//TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		TargetCharacter = Cast<ABaseCharacter>(TargetActor);
	}


	// Get the Source actor
	AActor* SourceActor = nullptr;
	AController* SourceController = nullptr;
	ABaseCharacter* SourceCharacter = nullptr;
	if (Source && Source->AbilityActorInfo.IsValid() && Source->AbilityActorInfo->AvatarActor.IsValid())
	{
		SourceActor = Source->AbilityActorInfo->AvatarActor.Get();
		SourceController = Source->AbilityActorInfo->PlayerController.Get();
		if (SourceController == nullptr && SourceActor != nullptr)
		{
			if (APawn* Pawn = Cast<APawn>(SourceActor))
			{
				SourceController = Pawn->GetController();
			}
		}

		// Use the controller to find the source pawn
		if (SourceController)
		{
			SourceCharacter = Cast<ABaseCharacter>(SourceController->GetPawn());
		}
		else
		{
			SourceCharacter = Cast<ABaseCharacter>(SourceActor);
		}

		// Set the causer actor based on context if it's set
		if (EffectContext.GetEffectCauser())
		{
			SourceActor = EffectContext.GetEffectCauser();
		}
	}

	//������ : ü�� ����
	if (Data.EvaluatedData.Attribute == GetDamageAttribute()) {
		//���� ������ �����´�.
		FHitResult HitResult;
		if (EffectContext.GetHitResult())
		{
			HitResult = *EffectContext.GetHitResult();

			//�߰� ����:
			//ü���� 0������ ���
			//���� ������ ���Ͽ� ����ϴ� ��� 
			// �߰��� �� �ִ�.
		}

		//�ּҰ� �ִ�ü�� ���̿��� ü��-������
		SetHealth(FMath::Clamp(GetHealth() - GetDamage(), MinimumValue, GetMaxHealth()));
		SetDamage(0.0f);


	}

	// ü�� : �߰����� ü���� ��� �ʿ��
	else if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{

		SetHealth(FMath::Clamp(GetHealth(), MinimumValue, GetMaxHealth()));
	}
	// ���� : ������ ���� 
	else if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{

		SetMana(FMath::Clamp(GetMana(), MinimumValue, GetMaxMana()));
	}

}


// ���� ��, ���� �ִ밪, ���� ���ŵ� �ִ밪, �ݿ��� ��Ʈ����Ʈ
// �ִ밪�� �����Ŵ
void UBaseAttributeSet::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty)
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
	{
		// Change current value to maintain the current Val / Max percent
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}


// ��Ʈ��ũ ������ ���Ǵ� �Ӽ��� ��ȯ, ���� �Ӽ��� �ִ� ��� ���� Ŭ������ ���� �����ǵǾ����
void UBaseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, HealthRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, ManaRegenRate, COND_None, REPNOTIFY_Always);
	//DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Damage, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, CharacterLevel, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Armor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MoveSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, AttackSpeed, COND_None, REPNOTIFY_Always);

}



void UBaseAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	//RepNotify �Ӽ����� AbilitySystemComponent::ActiveGameplayEffects�� ȣ���Ͽ� '���� ��'�� ������Ʈ�Ͽ� ���ο� '�⺻ ��'�� �����մϴ�.
	//https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Plugins/GameplayAbilities/FPredictionKey?application_version=5.3
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Health, OldHealth);
}

void UBaseAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxHealth, OldMaxHealth);
}

void UBaseAttributeSet::OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, HealthRegenRate, OldHealthRegenRate);
}


void UBaseAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Mana, OldMana);
}

void UBaseAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxMana, OldMaxMana);
}

void UBaseAttributeSet::OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, ManaRegenRate, OldManaRegenRate);
}
/*
void UBaseAttributeSet::OnRep_Damage(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Damage, OldValue);
}
*/

void UBaseAttributeSet::OnRep_CharacterLevel(const FGameplayAttributeData& OldCharacterLevel)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, CharacterLevel, OldCharacterLevel);
}

void UBaseAttributeSet::OnRep_Armor(const FGameplayAttributeData& OldArmor)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Armor, OldArmor);
}

void UBaseAttributeSet::OnRep_MoveSpeed(const FGameplayAttributeData& OldMoveSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MoveSpeed, OldMoveSpeed);
}

void UBaseAttributeSet::OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, AttackSpeed, OldAttackSpeed);
}
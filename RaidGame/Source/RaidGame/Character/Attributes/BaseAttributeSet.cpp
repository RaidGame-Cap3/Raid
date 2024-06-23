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




// 데이터 전처리
// 어트리뷰트 값을 변경 하기 전에 최대값의 상태 확인
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

//데이터 후처리
void UBaseAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) {
}

// 이펙트 실행 전처리
bool UBaseAttributeSet::PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) {

	if (!Super::PreGameplayEffectExecute(Data))
	{
		return false;
	}
	return true;

}

// 이펙트 실행 후처리
void UBaseAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) {
	Super::PostGameplayEffectExecute(Data);

	//만약 무적모드(God Mode)가 필요시 이 값으로 조정하면 됨
	float MinimumValue = 0.0f;


	//데미지 등의 이펙트를 발생시킨 Context
	FGameplayEffectContextHandle EffectContext = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = EffectContext.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssetTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssetTags);


	// Get the Target actor, which should be our owner
	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
	ABaseCharacter* TargetCharacter = nullptr;

	//GetOriginalInstigator()이 필요할지 GetOriginalInstigatorAbilitySystemComponent()만 필요할지는 추후 결정
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

	//데미지 : 체력 감소
	if (Data.EvaluatedData.Attribute == GetDamageAttribute()) {
		//공격 정보를 가져온다.
		FHitResult HitResult;
		if (EffectContext.GetHitResult())
		{
			HitResult = *EffectContext.GetHitResult();

			//추가 가능:
			//체력이 0이하일 경우
			//죽인 이유에 대하여 출력하는 기능 
			// 추가할 수 있다.
		}

		//최소값 최대체력 사이에서 체력-데미지
		SetHealth(FMath::Clamp(GetHealth() - GetDamage(), MinimumValue, GetMaxHealth()));
		SetDamage(0.0f);


	}

	// 체력 : 추가적인 체력의 제어가 필요시
	else if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{

		SetHealth(FMath::Clamp(GetHealth(), MinimumValue, GetMaxHealth()));
	}
	// 마나 : 마나의 제어 
	else if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{

		SetMana(FMath::Clamp(GetMana(), MinimumValue, GetMaxMana()));
	}

}


// 기존 값, 기존 최대값, 새로 갱신될 최대값, 반영할 어트리뷰트
// 최대값을 변경시킴
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


// 네트워크 복제에 사용되는 속성을 반환, 복제 속성이 있는 모든 액터 클래스에 의해 재정의되어야함
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
	//RepNotify 속성에서 AbilitySystemComponent::ActiveGameplayEffects를 호출하여 '최종 값'을 업데이트하여 새로운 '기본 값'을 제공합니다.
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
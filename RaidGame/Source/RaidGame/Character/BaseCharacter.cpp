// Fill out your copyright notice in the Description page of Project Settings.

//ĳ����
#include "RaidGame/Character/BaseCharacter.h"

//�����Ƽ �ý���
#include "RaidGame/Character/Abilities/RaidGameplayAbility.h"


// Sets default values
ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjectInitializer)
	//:Super(ObjectInitializer.SetDefaultSubobjectClass<UCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// �����Ƽ �ý��ۿ����� ƽ �ý��� ��� X
	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = true;

	//��Ʈ��ũ 
	//bAlwaysRelevant = true;

	//�����Ƽ �ý��� �±�
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
	EffectRemoveOnDeathTag = FGameplayTag::RequestGameplayTag(FName("Effect.RemoveOnDeath"));
}

/// �����Ƽ �ý���

// �����Ƽ ������Ʈ ȹ��
UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
	// ���� �������� ���� ��� ����ó�� �� ����
	//return nullptr;
	return AbilitySystemComponent.Get();
}

//���̵� �����Ƽ ������Ʈ ȹ��
/*
URaidAbilitySystemComponent* ABaseCharacter::GetRaidAbilitySystemComponent() const
{
	return Cast<URaidAbilitySystemComponent>(GetAbilitySystemComponent());
}
*/

bool ABaseCharacter::IsAlive() const
{
	return GetHealth() > 0.0f;
}


//�÷��̾� ������Ʈ ȹ��
//���� ���� ����
/*
AraidPlayerState* ABaseCharacter::GetraidPlayerState() const
{
	return CastChecked<AraidPlayerState>(GetPlayerState(), ECastCheckedType::NullAllowed);
}
*/


int32 ABaseCharacter::GetAbilityLevel(RaidAbilityInputID) const
{
	return 1;
}


void ABaseCharacter::RemoveAbilities()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || !AbilitySystemComponent->bCharacterAbilitiesGiven)
	{
		return;
	}

	// Remove any abilities added from a previous call. This checks to make sure the ability is in the startup 'CharacterAbilities' array.
	TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;

	for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
	{
		if ((Spec.SourceObject == this) && CharacterAbilities.Contains(Spec.Ability->GetClass()))
		{
			AbilitiesToRemove.Add(Spec.Handle);
		}
	}

	// Do in two passes so the removal happens after we have the full list
	for (int32 i = 0; i < AbilitiesToRemove.Num(); i++)
	{
		AbilitySystemComponent->ClearAbility(AbilitiesToRemove[i]);
	}

	AbilitySystemComponent->bCharacterAbilitiesGiven = false;
}



int32 ABaseCharacter::GetCharacterLevel() const
{
	if (AttributeSet.IsValid())
	{
		return static_cast<int32>(AttributeSet->GetCharacterLevel());
	}

	return 0;
}

float ABaseCharacter::GetHealth() const
{
	if (AttributeSet.IsValid())
	{
		return AttributeSet->GetHealth();
	}

	return 0.0f;
}

float ABaseCharacter::GetMaxHealth() const
{
	if (AttributeSet.IsValid())
	{
		return AttributeSet->GetMaxHealth();
	}

	return 0.0f;
}

float ABaseCharacter::GetMana() const
{
	if (AttributeSet.IsValid())
	{
		return AttributeSet->GetMana();
	}

	return 0.0f;
}

float ABaseCharacter::GetMaxMana() const
{
	if (AttributeSet.IsValid())
	{
		return AttributeSet->GetMaxMana();
	}

	return 0.0f;
}

float ABaseCharacter::GetMoveSpeed() const
{
	if (AttributeSet.IsValid())
	{
		return AttributeSet->GetMoveSpeed();
	}

	return 0.0f;
}

float ABaseCharacter::GetMoveSpeedBaseValue() const
{
	if (AttributeSet.IsValid())
	{
		return AttributeSet->GetMoveSpeedAttribute().GetGameplayAttributeData(AttributeSet.Get())->GetBaseValue();
	}

	return 0.0f;
}



// ������ ��� Ŭ���̾�Ʈ
void ABaseCharacter::Die()
{
	// ���������� ����
	RemoveAbilities();

	//GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//GetCharacterMovement()->GravityScale = 0;
	//GetCharacterMovement()->Velocity = FVector(0);

	OnCharacterDied.Broadcast(this);

	if (AbilitySystemComponent.IsValid())
	{
		AbilitySystemComponent->CancelAllAbilities();

		FGameplayTagContainer EffectTagsToRemove;
		EffectTagsToRemove.AddTag(EffectRemoveOnDeathTag);
		int32 NumEffectsRemoved = AbilitySystemComponent->RemoveActiveEffectsWithTags(EffectTagsToRemove);

		AbilitySystemComponent->AddLooseGameplayTag(DeadTag);
	}

	if (DeathMontage)
	{
		PlayAnimMontage(DeathMontage);
	}
	else
	{
		FinishDying();
	}
}

void ABaseCharacter::FinishDying()
{
	Destroy();
}


void ABaseCharacter::AddCharacterAbilities()
{
	// Grant abilities, but only on the server	
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || AbilitySystemComponent->bCharacterAbilitiesGiven)
	{
		return;
	}


	for (TSubclassOf<URaidGameplayAbility>& StartupAbility : CharacterAbilities)
	{
		AbilitySystemComponent->GiveAbility(
			FGameplayAbilitySpec(StartupAbility, GetAbilityLevel(StartupAbility.GetDefaultObject()->AbilityID), static_cast<int32>(StartupAbility.GetDefaultObject()->AbilityInputID), this));
	}

	AbilitySystemComponent->bCharacterAbilitiesGiven = true;
}


void ABaseCharacter::InitializeAttributes()
{
	if (!AbilitySystemComponent.IsValid())
	{
		return;
	}

	if (!DefaultAttributes)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaultAttributes for %s. Please fill in the character's Blueprint."), *FString(__FUNCTION__), *GetName());
		return;
	}

	// Can run on Server and Client
	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributes, GetCharacterLevel(), EffectContext);
	if (NewHandle.IsValid())
	{
		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());
	}
}


void ABaseCharacter::AddStartupEffects()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || AbilitySystemComponent->bStartupEffectsApplied)
	{
		return;
	}

	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	AbilitySystemComponent->bStartupEffectsApplied = true;
}


void ABaseCharacter::SetHealth(float Health)
{
	if (AttributeSet.IsValid())
	{
		AttributeSet->SetHealth(Health);
	}
}

void ABaseCharacter::SetMana(float Mana)
{
	if (AttributeSet.IsValid())
	{
		AttributeSet->SetMana(Mana);
	}
}


/// ����

void ABaseCharacter::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	const bool bRegisterWithSignificanceManager = !IsNetMode(NM_DedicatedServer);
	if (bRegisterWithSignificanceManager)
	{

	}
}

void ABaseCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	const bool bRegisterWithSignificanceManager = !IsNetMode(NM_DedicatedServer);
	if (bRegisterWithSignificanceManager)
	{

	}
}

void ABaseCharacter::Reset()
{
	Super::Reset();
	K2_OnReset();

}

void ABaseCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);


}

void ABaseCharacter::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);

	if (UCharacterMovementComponent* MovementComponent = GetCharacterMovement())
	{

	}
}

/*
// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}*/

// Called to bind functionality to input
//void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//}
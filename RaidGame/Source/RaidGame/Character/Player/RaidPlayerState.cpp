// Fill out your copyright notice in the Description page of Project Settings.
// 어트리뷰트 셋
// 어빌리티 시스템 

#include "RaidGame/Character/Player/RaidPlayerState.h"
#include "RaidGame/Character/RaidAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "RaidGame/Character/BaseCharacter.h"








// 클라이언트 통신을 위함

ARaidPlayerState::ARaidPlayerState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// 컴포넌트 : OwnerActor의 생성자에서 구성되고 명시적으로 복제되어 표시
	// Create ability system component, and set it to be explicitly replicated
	//AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<URaidAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent = CreateDefaultSubobject<URaidAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

	AbilitySystemComponent->SetIsReplicated(true);

	// Mixed mode means we only are replicated the GEs to ourself, not the GEs to simulated proxies. If another GDPlayerState (Hero) receives a GE,
// we won't be told about it by the Server. Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);


	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSetBase = CreateDefaultSubobject<UBaseAttributeSet>(TEXT("AttributeSetBase"));


	// Set PlayerState's NetUpdateFrequency to the same as the Character.
	// Default is very low for PlayerStates and introduces perceived lag in the ability system.
	// 100 is probably way too high for a shipping game, you can adjust to fit your needs.
	NetUpdateFrequency = 100.0f;

	// Cache tags
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
}






UAbilitySystemComponent* ARaidPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;//Cast<UAbilitySystemComponent*> (GetRaidAbilitySystemComponent);
}


/*
UAbilitySystemComponent* AraidPlayerState::GetAbilitySystemComponent() const
{
	return GetRaidAbilitySystemComponent();//Cast<UAbilitySystemComponent*> (GetRaidAbilitySystemComponent);
}
*/

UBaseAttributeSet* ARaidPlayerState::GetBaseAttributeSet() const
{
	return AttributeSetBase;
}

bool ARaidPlayerState::IsAlive() const
{
	return GetHealth() > 0.0f;
}


void ARaidPlayerState::BeginPlay() {
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		// Attribute change callbacks
		HealthChangedDelegateHandle = AbilitySystemComponent->
			GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &ARaidPlayerState::HealthChanged);

		MaxHealthChangedDelegateHandle = AbilitySystemComponent->
			GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxHealthAttribute()).AddUObject(this, &ARaidPlayerState::MaxHealthChanged);

		HealthRegenRateChangedDelegateHandle = AbilitySystemComponent->
			GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthRegenRateAttribute()).AddUObject(this, &ARaidPlayerState::HealthRegenRateChanged);

		ManaChangedDelegateHandle = AbilitySystemComponent->
			GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetManaAttribute()).AddUObject(this, &ARaidPlayerState::ManaChanged);

		MaxManaChangedDelegateHandle = AbilitySystemComponent->
			GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxManaAttribute()).AddUObject(this, &ARaidPlayerState::MaxManaChanged);

		ManaRegenRateChangedDelegateHandle = AbilitySystemComponent->
			GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetManaRegenRateAttribute()).AddUObject(this, &ARaidPlayerState::ManaRegenRateChanged);

		MoveSpeedChangedDelegateHandle = AbilitySystemComponent->
			GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMoveSpeedAttribute()).AddUObject(this, &ARaidPlayerState::MoveSpeedChanged);

		AttackSpeedChangedDelegateHandle = AbilitySystemComponent->
			GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetAttackSpeedAttribute()).AddUObject(this, &ARaidPlayerState::AttackSpeedChanged);

		CharacterLevelChangedDelegateHandle = AbilitySystemComponent->
			GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetCharacterLevelAttribute()).AddUObject(this, &ARaidPlayerState::CharacterLevelChanged);

		// Tag change callbacks
		AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTag::RequestGameplayTag(FName("State.Debuff.Stun")), EGameplayTagEventType::NewOrRemoved).AddUObject(this, &ARaidPlayerState::StunTagChanged);
	}
}



float ARaidPlayerState::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}

float ARaidPlayerState::GetMaxHealth() const
{
	return AttributeSetBase->GetMaxHealth();
}

float ARaidPlayerState::GetHealthRegenRate() const
{
	return AttributeSetBase->GetHealthRegenRate();
}

float ARaidPlayerState::GetMana() const
{
	return AttributeSetBase->GetMana();
}

float ARaidPlayerState::GetMaxMana() const
{
	return AttributeSetBase->GetMaxMana();
}

float ARaidPlayerState::GetManaRegenRate() const
{
	return AttributeSetBase->GetManaRegenRate();
}

float ARaidPlayerState::GetArmor() const
{
	return AttributeSetBase->GetArmor();
}

float ARaidPlayerState::GetMoveSpeed() const
{
	return AttributeSetBase->GetMoveSpeed();
}

float ARaidPlayerState::GetAttackSpeed() const
{
	return AttributeSetBase->GetAttackSpeed();
}

int32 ARaidPlayerState::GetCharacterLevel() const
{
	return AttributeSetBase->GetCharacterLevel();
}





void ARaidPlayerState::HealthChanged(const FOnAttributeChangeData& Data)
{
	float Health = Data.NewValue;

	// Update floating status bar
	//ARaidPlayerState* Hero = Cast<ABaseCharacter>(GetPawn());
	//if (Hero)
	//{
		//UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		//if (HeroFloatingStatusBar)
		//{
		//	HeroFloatingStatusBar->SetHealthPercentage(Health / GetMaxHealth());
		//}
	//}

	// Update the HUD
	// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint

	// If the player died, handle death
	if (!IsAlive() && !AbilitySystemComponent->HasMatchingGameplayTag(DeadTag))
	{
		//if (Hero)
		//{
			//Hero->Die();
		//}
	}
}



void ARaidPlayerState::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	float MaxHealth = Data.NewValue;

	// Update floating status bar
	//ARaidPlayerState* Hero = Cast<ABaseCharacter>(GetPawn());
	//if (Hero)
	//{
		//UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		//if (HeroFloatingStatusBar)
		//{
		//	HeroFloatingStatusBar->SetHealthPercentage(GetHealth() / MaxHealth);
		//}
	//}

	// Update the HUD
	//AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	//if (PC)
	//{
	//	UGDHUDWidget* HUD = PC->GetHUD();
	//	if (HUD)
	//	{
	//		HUD->SetMaxHealth(MaxHealth);
	//	}
	//}
}

void ARaidPlayerState::HealthRegenRateChanged(const FOnAttributeChangeData& Data)
{
	float HealthRegenRate = Data.NewValue;

	// Update the HUD
	//AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	//if (PC)
	//{
	//	UGDHUDWidget* HUD = PC->GetHUD();
	//	if (HUD)
	//	{
	//		HUD->SetHealthRegenRate(HealthRegenRate);
	//	}
//	}
}

void ARaidPlayerState::ManaChanged(const FOnAttributeChangeData& Data)
{
	float Mana = Data.NewValue;

	// Update floating status bar
	//ARaidPlayerState* Hero = Cast<ABaseCharacter>(GetPawn());
	//if (Hero)
	//{
		//UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		//if (HeroFloatingStatusBar)
		//{
		//	HeroFloatingStatusBar->SetManaPercentage(Mana / GetMaxMana());
		//}
	//}

	// Update the HUD
	// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint
}

void ARaidPlayerState::MaxManaChanged(const FOnAttributeChangeData& Data)
{
	float MaxMana = Data.NewValue;

	// Update floating status bar
	//ARaidPlayerState* Hero = Cast<ABaseCharacter>(GetPawn());
	//if (Hero)
	//{
		//UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		//if (HeroFloatingStatusBar)
		//{
		//	HeroFloatingStatusBar->SetManaPercentage(GetMana() / MaxMana);
		//}
	//}

	// Update the HUD
	//AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	//if (PC)
	//{
	//	UGDHUDWidget* HUD = PC->GetHUD();
	//	if (HUD)
	//	{
	//		HUD->SetMaxMana(MaxMana);
	//	}
	//}
}

void ARaidPlayerState::ManaRegenRateChanged(const FOnAttributeChangeData& Data)
{
	float ManaRegenRate = Data.NewValue;

	// Update the HUD
	//AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	//if (PC)
	//{
	//	UGDHUDWidget* HUD = PC->GetHUD();
	//	if (HUD)
	//	{
	//		HUD->SetManaRegenRate(ManaRegenRate);
	//	}
	//}
}



void ARaidPlayerState::CharacterLevelChanged(const FOnAttributeChangeData& Data)
{
	float CharacterLevel = Data.NewValue;

	// Update the HUD
	//AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	//if (PC)
	//{
	//	UGDHUDWidget* HUD = PC->GetHUD();
	//	if (HUD)
	//	{
	//		HUD->SetHeroLevel(CharacterLevel);
	//	}
	//}
}


void ARaidPlayerState::MoveSpeedChanged(const FOnAttributeChangeData& Data) {



}


void ARaidPlayerState::AttackSpeedChanged(const FOnAttributeChangeData& Data) {


}


void ARaidPlayerState::StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	if (NewCount > 0)
	{
		FGameplayTagContainer AbilityTagsToCancel;
		AbilityTagsToCancel.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability")));

		FGameplayTagContainer AbilityTagsToIgnore;
		AbilityTagsToIgnore.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.NotCanceledByStun")));

		AbilitySystemComponent->CancelAbilities(&AbilityTagsToCancel, &AbilityTagsToIgnore);
	}
}
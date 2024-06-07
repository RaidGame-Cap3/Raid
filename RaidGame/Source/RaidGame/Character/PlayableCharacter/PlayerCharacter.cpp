// Fill out your copyright notice in the Description page of Project Settings.


#include "RaidGame/Character/PlayableCharacter/PlayerCharacter.h"
#include "RaidGame/Character/Attributes/BaseAttributeSet.h"
#include "RaidGame/Character/RaidAbilitySystemComponent.h"
#include "RaidGame/Character/Player/RaidPlayerState.h"

APlayerCharacter::APlayerCharacter(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{



	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind player input to the AbilitySystemComponent. Also called in OnRep_PlayerState because of a potential race condition.
	BindASCInput();
}


// Server only
void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	ARaidPlayerState* PS = GetPlayerState<ARaidPlayerState>();
	if (PS)
	{
		// Set the ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystemComponent = Cast<URaidAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// AI won't have PlayerControllers so we can init again here just to be sure. No harm in initing twice for heroes that have PlayerControllers.
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);

		// Set the AttributeSetBase for convenience attribute functions
		AttributeSet = PS->GetBaseAttributeSet();

		// If we handle players disconnecting and rejoining in the future, we'll have to change this so that possession from rejoining doesn't reset attributes.
		// For now assume possession = spawn/respawn.
		InitializeAttributes();


		// Respawn specific things that won't affect first possession.

		// Forcibly set the DeadTag count to 0
		AbilitySystemComponent->SetTagMapCount(DeadTag, 0);

		// Set Health/Mana/Stamina to their max. This is only necessary for *Respawn*.
		SetHealth(GetMaxHealth());
		SetMana(GetMaxMana());

		// End respawn specific things


		AddStartupEffects();

		AddCharacterAbilities();

		//ARaidPlayerController* PC = Cast<ARaidPlayerController>(GetController());
		//if (PC)
		//{
		//	PC->CreateHUD();
		//}

		//InitializeFloatingStatusBar();
	}
}



void APlayerCharacter::FinishDying()
{
	if (GetLocalRole() == ROLE_Authority) {

	}

	Super::FinishDying();
}


/**
* On the Server, Possession happens before BeginPlay.
* On the Client, BeginPlay happens before Possession.
* So we can't use BeginPlay to do anything with the AbilitySystemComponent because we don't have it until the PlayerState replicates from possession.
*/
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Only needed for Heroes placed in world and when the player is the Server.
	// On respawn, they are set up in PossessedBy.
	// When the player a client, the floating status bars are all set up in OnRep_PlayerState.
	//InitializeFloatingStatusBar();

}


// Client only
void APlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	ARaidPlayerState* PS = GetPlayerState<ARaidPlayerState>();
	if (PS)
	{
		// Set the ASC for clients. Server does this in PossessedBy.
		AbilitySystemComponent = Cast<URaidAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// Init ASC Actor Info for clients. Server will init its ASC when it possesses a new Actor.
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);

		// Bind player input to the AbilitySystemComponent. Also called in SetupPlayerInputComponent because of a potential race condition.
		BindASCInput();

		// Set the AttributeSetBase for convenience attribute functions
		AttributeSet = PS->GetBaseAttributeSet();

		// If we handle players disconnecting and rejoining in the future, we'll have to change this so that posession from rejoining doesn't reset attributes.
		// For now assume possession = spawn/respawn.
		InitializeAttributes();

		//AGDPlayerController* PC = Cast<AGDPlayerController>(GetController());
		//if (PC)
		//{
		//	PC->CreateHUD();
		//}

		// Simulated on proxies don't have their PlayerStates yet when BeginPlay is called so we call it again here
		//InitializeFloatingStatusBar();


		// Respawn specific things that won't affect first possession.

		// Forcibly set the DeadTag count to 0
		AbilitySystemComponent->SetTagMapCount(DeadTag, 0);

		// Set Health/Mana/Stamina to their max. This is only necessary for *Respawn*.
		SetHealth(GetMaxHealth());
		SetMana(GetMaxMana());
	}
}

void APlayerCharacter::BindASCInput()
{
	if (!ASCInputBound && AbilitySystemComponent.IsValid() && IsValid(InputComponent))
	{
		FTopLevelAssetPath AbilityEnumAssetPath = FTopLevelAssetPath(FName("/Script/RaidGame"), FName("RaidAbilityInputID"));
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"),
			FString("CancelTarget"), AbilityEnumAssetPath, static_cast<int32>(RaidAbilityInputID::Confirm), static_cast<int32>(RaidAbilityInputID::Cancel)));

		ASCInputBound = true;
	}
}
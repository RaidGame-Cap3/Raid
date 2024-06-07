// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RaidGame/Character/BaseCharacter.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class RAIDGAME_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()
	
public:
	APlayerCharacter(const class FObjectInitializer& ObjectInitializer);


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Only called on the Server. Calls before Server's AcknowledgePossession.
	virtual void PossessedBy(AController* NewController) override;

	virtual void FinishDying() override;

protected:

	bool ASCInputBound = false;

	FGameplayTag DeadTag;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// Client only
	virtual void OnRep_PlayerState() override;

	// Called from both SetupPlayerInputComponent and OnRep_PlayerState because of a potential race condition where the PlayerController might
	// call ClientRestart which calls SetupPlayerInputComponent before the PlayerState is repped to the client so the PlayerState would be null in SetupPlayerInputComponent.
	// Conversely, the PlayerState might be repped before the PlayerController calls ClientRestart so the Actor's InputComponent would be null in OnRep_PlayerState.
	void BindASCInput();
};

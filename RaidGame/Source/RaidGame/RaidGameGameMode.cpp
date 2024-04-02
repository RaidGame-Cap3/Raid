// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaidGameGameMode.h"
#include "RaidGamePlayerController.h"
#include "RaidGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARaidGameGameMode::ARaidGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARaidGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}
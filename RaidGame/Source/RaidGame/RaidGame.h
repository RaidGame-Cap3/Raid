// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

DECLARE_LOG_CATEGORY_EXTERN(LogRaidGame, Log, All);




/**
 *
 */

#define ACTOR_ROLE_FSTRING *(FindObject<UEnum>(nullptr, TEXT("/Script/Engine.ENetRole"), true)->GetNameStringByValue(GetLocalRole()))
#define GET_ACTOR_ROLE_FSTRING(Actor) *(FindObject<UEnum>(nullptr, TEXT("/Script/Engine.ENetRole"), true)->GetNameStringByValue(Actor->GetLocalRole()))


UENUM(BlueprintType)
enum class RaidAbilityInputID : uint8 {

	// 0 None
	None			UMETA(DisplayName = "None"),
	// 1 Confirm
	Confirm			UMETA(DisplayName = "Confirm"),
	// 2 Cancel
	Cancel			UMETA(DisplayName = "Cancel"),
	// 3 LMB (Q)
	Ability1		UMETA(DisplayName = "Ability1"),
	// 4 RMB (W)
	Ability2		UMETA(DisplayName = "Ability2"),
	// 5 E
	Ability3		UMETA(DisplayName = "Ability3"),
	// 6 R
	Ability4		UMETA(DisplayName = "Ability4"),
	// 전환 형식의 스킬을 미리 대비
	// 7
	Ability5		UMETA(DisplayName = "Ability5"),
	// 8 
	Ability6		UMETA(DisplayName = "Ability6"),
	// 9 
	Ability7		UMETA(DisplayName = "Ability7"),
	// 10 
	Ability8		UMETA(DisplayName = "Ability8"),
	// 11 A
	BasicAttack		UMETA(DisplayName = "BasicAttack"),
	// 12 Space바
	Sprint		UMETA(DisplayName = "Sprint"),
};
// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RaidGame.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RAIDGAME_RaidGame_generated_h
#error "RaidGame.generated.h already included, missing '#pragma once' in RaidGame.h"
#endif
#define RAIDGAME_RaidGame_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaidGame_Source_RaidGame_RaidGame_h


#define FOREACH_ENUM_RAIDABILITYINPUTID(op) \
	op(RaidAbilityInputID::None) \
	op(RaidAbilityInputID::Confirm) \
	op(RaidAbilityInputID::Cancel) \
	op(RaidAbilityInputID::Ability1) \
	op(RaidAbilityInputID::Ability2) \
	op(RaidAbilityInputID::Ability3) \
	op(RaidAbilityInputID::Ability4) \
	op(RaidAbilityInputID::Ability5) \
	op(RaidAbilityInputID::Ability6) \
	op(RaidAbilityInputID::Ability7) \
	op(RaidAbilityInputID::Ability8) \
	op(RaidAbilityInputID::BasicAttack) \
	op(RaidAbilityInputID::Sprint) 

enum class RaidAbilityInputID : uint8;
template<> struct TIsUEnumClass<RaidAbilityInputID> { enum { Value = true }; };
template<> RAIDGAME_API UEnum* StaticEnum<RaidAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

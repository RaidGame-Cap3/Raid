// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Abilities/RaidGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class URaidAbilitySystemComponent;
#ifdef RAIDGAME_RaidGameplayAbility_generated_h
#error "RaidGameplayAbility.generated.h already included, missing '#pragma once' in RaidGameplayAbility.h"
#endif
#define RAIDGAME_RaidGameplayAbility_generated_h

#define FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_SPARSE_DATA
#define FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRaidAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo);


#define FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_ACCESSORS
#define FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURaidGameplayAbility(); \
	friend struct Z_Construct_UClass_URaidGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(URaidGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RaidGame"), NO_API) \
	DECLARE_SERIALIZER(URaidGameplayAbility)


#define FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URaidGameplayAbility(URaidGameplayAbility&&); \
	NO_API URaidGameplayAbility(const URaidGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URaidGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URaidGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URaidGameplayAbility) \
	NO_API virtual ~URaidGameplayAbility();


#define FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_13_PROLOG
#define FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_SPARSE_DATA \
	FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_ACCESSORS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAIDGAME_API UClass* StaticClass<class URaidGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Abilities/AbilityTasks/AT_WaitReceiveDamage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAT_WaitReceiveDamage;
class UGameplayAbility;
class URaidAbilitySystemComponent;
#ifdef RAIDGAME_AT_WaitReceiveDamage_generated_h
#error "AT_WaitReceiveDamage.generated.h already included, missing '#pragma once' in AT_WaitReceiveDamage.h"
#endif
#define RAIDGAME_AT_WaitReceiveDamage_generated_h

#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_10_DELEGATE \
RAIDGAME_API void FWaitReceiveDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitReceiveDamageDelegate, URaidAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage);


#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_SPARSE_DATA
#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitReceiveDamage); \
	DECLARE_FUNCTION(execOnDamageReceived);


#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_ACCESSORS
#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAT_WaitReceiveDamage(); \
	friend struct Z_Construct_UClass_UAT_WaitReceiveDamage_Statics; \
public: \
	DECLARE_CLASS(UAT_WaitReceiveDamage, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaidGame"), NO_API) \
	DECLARE_SERIALIZER(UAT_WaitReceiveDamage)


#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAT_WaitReceiveDamage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAT_WaitReceiveDamage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAT_WaitReceiveDamage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAT_WaitReceiveDamage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAT_WaitReceiveDamage(UAT_WaitReceiveDamage&&); \
	NO_API UAT_WaitReceiveDamage(const UAT_WaitReceiveDamage&); \
public: \
	NO_API virtual ~UAT_WaitReceiveDamage();


#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_16_PROLOG
#define FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_SPARSE_DATA \
	FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_RPC_WRAPPERS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_ACCESSORS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_INCLASS \
	FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAIDGAME_API UClass* StaticClass<class UAT_WaitReceiveDamage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

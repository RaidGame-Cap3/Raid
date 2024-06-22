// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class RaidAbilityInputID : uint8;
#ifdef RAIDGAME_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define RAIDGAME_BaseCharacter_generated_h

#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_27_DELEGATE \
RAIDGAME_API void FDeathEvent_DelegateWrapper(const FMulticastScriptDelegate& DeathEvent, AActor* OwningActor);


#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_SPARSE_DATA
#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMoveSpeedBaseValue); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execFinishDying); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetAbilityLevel);


#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_ACCESSORS
#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ARaidGameCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaidGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseCharacter*>(this); }


#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	NO_API virtual ~ABaseCharacter();


#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_31_PROLOG
#define FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_SPARSE_DATA \
	FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_ACCESSORS \
	FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_INCLASS_NO_PURE_DECLS \
	FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAIDGAME_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Raid_RaidGame_Source_RaidGame_Character_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

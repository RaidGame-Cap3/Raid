// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Attributes/BaseAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef RAIDGAME_BaseAttributeSet_generated_h
#error "BaseAttributeSet.generated.h already included, missing '#pragma once' in BaseAttributeSet.h"
#endif
#define RAIDGAME_BaseAttributeSet_generated_h

#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_SPARSE_DATA
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_AttackSpeed); \
	DECLARE_FUNCTION(execOnRep_CharacterLevel); \
	DECLARE_FUNCTION(execOnRep_MoveSpeed); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_ManaRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_ACCESSORS
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAttributeSet(); \
	friend struct Z_Construct_UClass_UBaseAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UBaseAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RaidGame"), NO_API) \
	DECLARE_SERIALIZER(UBaseAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		HealthRegenRate, \
		Mana, \
		MaxMana, \
		ManaRegenRate, \
		MoveSpeed, \
		AttackSpeed, \
		CharacterLevel, \
		Armor, \
		NETFIELD_REP_END=Armor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UBaseAttributeSet) \
public:


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseAttributeSet(UBaseAttributeSet&&); \
	NO_API UBaseAttributeSet(const UBaseAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseAttributeSet) \
	NO_API virtual ~UBaseAttributeSet();


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_44_PROLOG
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_SPARSE_DATA \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_ACCESSORS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_INCLASS_NO_PURE_DECLS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAIDGAME_API UClass* StaticClass<class UBaseAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

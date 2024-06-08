// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player/RaidPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RAIDGAME_RaidPlayerState_generated_h
#error "RaidPlayerState.generated.h already included, missing '#pragma once' in RaidPlayerState.h"
#endif
#define RAIDGAME_RaidPlayerState_generated_h

#define FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_SPARSE_DATA
#define FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execGetAttackSpeed); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetArmor); \
	DECLARE_FUNCTION(execGetManaRegenRate); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetHealthRegenRate); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execIsAlive);


#define FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_ACCESSORS
#define FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARaidPlayerState(); \
	friend struct Z_Construct_UClass_ARaidPlayerState_Statics; \
public: \
	DECLARE_CLASS(ARaidPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaidGame"), NO_API) \
	DECLARE_SERIALIZER(ARaidPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ARaidPlayerState*>(this); }


#define FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARaidPlayerState(ARaidPlayerState&&); \
	NO_API ARaidPlayerState(const ARaidPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaidPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaidPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARaidPlayerState) \
	NO_API virtual ~ARaidPlayerState();


#define FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_45_PROLOG
#define FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_SPARSE_DATA \
	FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_ACCESSORS \
	FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_INCLASS_NO_PURE_DECLS \
	FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAIDGAME_API UClass* StaticClass<class ARaidPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

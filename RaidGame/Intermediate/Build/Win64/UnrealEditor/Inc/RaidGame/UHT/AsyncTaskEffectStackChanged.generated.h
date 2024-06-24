// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AsyncTaskEffectStackChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UAsyncTaskEffectStackChanged;
struct FActiveGameplayEffectHandle;
struct FGameplayTag;
#ifdef RAIDGAME_AsyncTaskEffectStackChanged_generated_h
#error "AsyncTaskEffectStackChanged.generated.h already included, missing '#pragma once' in AsyncTaskEffectStackChanged.h"
#endif
#define RAIDGAME_AsyncTaskEffectStackChanged_generated_h

#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_10_DELEGATE \
RAIDGAME_API void FOnGameplayEffectStackChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameplayEffectStackChanged, FGameplayTag EffectGameplayTag, FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount);


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_SPARSE_DATA
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForGameplayEffectStackChange);


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_ACCESSORS
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskEffectStackChanged(); \
	friend struct Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskEffectStackChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RaidGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskEffectStackChanged)


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskEffectStackChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTaskEffectStackChanged(UAsyncTaskEffectStackChanged&&); \
	NO_API UAsyncTaskEffectStackChanged(const UAsyncTaskEffectStackChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskEffectStackChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskEffectStackChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskEffectStackChanged) \
	NO_API virtual ~UAsyncTaskEffectStackChanged();


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_16_PROLOG
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_SPARSE_DATA \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_ACCESSORS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAIDGAME_API UClass* StaticClass<class UAsyncTaskEffectStackChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

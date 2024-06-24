// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AsyncTaskAttributeChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UAsyncTaskAttributeChanged;
struct FGameplayAttribute;
#ifdef RAIDGAME_AsyncTaskAttributeChanged_generated_h
#error "AsyncTaskAttributeChanged.generated.h already included, missing '#pragma once' in AsyncTaskAttributeChanged.h"
#endif
#define RAIDGAME_AsyncTaskAttributeChanged_generated_h

#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_11_DELEGATE \
RAIDGAME_API void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, FGameplayAttribute Attribute, float NewValue, float OldValue);


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_SPARSE_DATA
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForAttributesChange); \
	DECLARE_FUNCTION(execListenForAttributeChange);


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_ACCESSORS
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskAttributeChanged(); \
	friend struct Z_Construct_UClass_UAsyncTaskAttributeChanged_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskAttributeChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RaidGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskAttributeChanged)


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskAttributeChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTaskAttributeChanged(UAsyncTaskAttributeChanged&&); \
	NO_API UAsyncTaskAttributeChanged(const UAsyncTaskAttributeChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskAttributeChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskAttributeChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskAttributeChanged) \
	NO_API virtual ~UAsyncTaskAttributeChanged();


#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_18_PROLOG
#define FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_SPARSE_DATA \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_ACCESSORS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAIDGAME_API UClass* StaticClass<class UAsyncTaskAttributeChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskAttributeChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

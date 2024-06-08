// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Character/BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	RAIDGAME_API UClass* Z_Construct_UClass_ABaseCharacter();
	RAIDGAME_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	RAIDGAME_API UClass* Z_Construct_UClass_ARaidGameCharacter();
	RAIDGAME_API UClass* Z_Construct_UClass_URaidGameplayAbility_NoRegister();
	RAIDGAME_API UEnum* Z_Construct_UEnum_RaidGame_RaidAbilityInputID();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics
	{
		struct _Script_RaidGame_eventDeathEvent_Parms
		{
			AActor* OwningActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventDeathEvent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RaidGame, nullptr, "DeathEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::_Script_RaidGame_eventDeathEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::_Script_RaidGame_eventDeathEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDeathEvent_DelegateWrapper(const FMulticastScriptDelegate& DeathEvent, AActor* OwningActor)
{
	struct _Script_RaidGame_eventDeathEvent_Parms
	{
		AActor* OwningActor;
	};
	_Script_RaidGame_eventDeathEvent_Parms Parms;
	Parms.OwningActor=OwningActor;
	DeathEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ABaseCharacter::execGetMoveSpeedBaseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeedBaseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetMoveSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetCharacterLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execFinishDying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishDying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetAbilityLevel)
	{
		P_GET_ENUM(RaidAbilityInputID,Z_Param_AbilityID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbilityLevel(RaidAbilityInputID(Z_Param_AbilityID));
		P_NATIVE_END;
	}
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishDying", &ABaseCharacter::execFinishDying },
			{ "GetAbilityLevel", &ABaseCharacter::execGetAbilityLevel },
			{ "GetCharacterLevel", &ABaseCharacter::execGetCharacterLevel },
			{ "GetHealth", &ABaseCharacter::execGetHealth },
			{ "GetMana", &ABaseCharacter::execGetMana },
			{ "GetMaxHealth", &ABaseCharacter::execGetMaxHealth },
			{ "GetMaxMana", &ABaseCharacter::execGetMaxMana },
			{ "GetMoveSpeed", &ABaseCharacter::execGetMoveSpeed },
			{ "GetMoveSpeedBaseValue", &ABaseCharacter::execGetMoveSpeedBaseValue },
			{ "IsAlive", &ABaseCharacter::execIsAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCharacter_FinishDying_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_FinishDying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_FinishDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "FinishDying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_FinishDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_FinishDying_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_FinishDying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_FinishDying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics
	{
		struct BaseCharacter_eventGetAbilityLevel_Parms
		{
			RaidAbilityInputID AbilityID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityID_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::NewProp_AbilityID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetAbilityLevel_Parms, AbilityID), Z_Construct_UEnum_RaidGame_RaidAbilityInputID, METADATA_PARAMS(0, nullptr) }; // 1594016707
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::NewProp_AbilityID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::NewProp_AbilityID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AbilityID\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AbilityID\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::BaseCharacter_eventGetAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::BaseCharacter_eventGetAbilityLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics
	{
		struct BaseCharacter_eventGetCharacterLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n/// \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd get\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd get" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::BaseCharacter_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::BaseCharacter_eventGetCharacterLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics
	{
		struct BaseCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::BaseCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::BaseCharacter_eventGetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetMana_Statics
	{
		struct BaseCharacter_eventGetMana_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetMana", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::BaseCharacter_eventGetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::BaseCharacter_eventGetMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics
	{
		struct BaseCharacter_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::BaseCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::BaseCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics
	{
		struct BaseCharacter_eventGetMaxMana_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetMaxMana", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::BaseCharacter_eventGetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::BaseCharacter_eventGetMaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics
	{
		struct BaseCharacter_eventGetMoveSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter|Attributes" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::BaseCharacter_eventGetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::BaseCharacter_eventGetMoveSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics
	{
		struct BaseCharacter_eventGetMoveSpeedBaseValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetMoveSpeedBaseValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the Base value of MoveSpeed\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Base value of MoveSpeed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetMoveSpeedBaseValue", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::BaseCharacter_eventGetMoveSpeedBaseValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::BaseCharacter_eventGetMoveSpeedBaseValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics
	{
		struct BaseCharacter_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Chracter" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::BaseCharacter_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::BaseCharacter_eventIsAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterDied_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterDied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARaidGameCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_FinishDying, "FinishDying" }, // 2950831257
		{ &Z_Construct_UFunction_ABaseCharacter_GetAbilityLevel, "GetAbilityLevel" }, // 770917705
		{ &Z_Construct_UFunction_ABaseCharacter_GetCharacterLevel, "GetCharacterLevel" }, // 14137777
		{ &Z_Construct_UFunction_ABaseCharacter_GetHealth, "GetHealth" }, // 250855968
		{ &Z_Construct_UFunction_ABaseCharacter_GetMana, "GetMana" }, // 1342738771
		{ &Z_Construct_UFunction_ABaseCharacter_GetMaxHealth, "GetMaxHealth" }, // 1646258619
		{ &Z_Construct_UFunction_ABaseCharacter_GetMaxMana, "GetMaxMana" }, // 3360649248
		{ &Z_Construct_UFunction_ABaseCharacter_GetMoveSpeed, "GetMoveSpeed" }, // 40801674
		{ &Z_Construct_UFunction_ABaseCharacter_GetMoveSpeedBaseValue, "GetMoveSpeedBaseValue" }, // 2581273706
		{ &Z_Construct_UFunction_ABaseCharacter_IsAlive, "IsAlive" }, // 833601672
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHealth_AttributeChanged, UHealthComponent*, HealthComponent, float, OldValue, float, NewValue, AActor*, Instigator);\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterDiedDelegate, AraidCharacter*, Character);\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BaseCharacter.h" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHealth_AttributeChanged, UHealthComponent*, HealthComponent, float, OldValue, float, NewValue, AActor*, Instigator);\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterDiedDelegate, AraidCharacter*, Character);" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_OnCharacterDied_MetaData[] = {
		{ "Category", "Raid|Chracter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_OnCharacterDied = { "OnCharacterDied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, OnCharacterDied), Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_OnCharacterDied_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_OnCharacterDied_MetaData) }; // 1423723346
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "Raid|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**/" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterName_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DeathMontage_MetaData[] = {
		{ "Category", "Raid|Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DeathMontage_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DeathMontage_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterAbilities_Inner = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URaidGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterAbilities_MetaData[] = {
		{ "Category", "Raid|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default abilities for this Character. These will be removed on Character death and regiven if Character respawns.\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default abilities for this Character. These will be removed on Character death and regiven if Character respawns." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterAbilities = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, CharacterAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterAbilities_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterAbilities_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Raid|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effect \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effect \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, DefaultAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DefaultAttributes_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DefaultAttributes_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartupEffects_MetaData[] = {
		{ "Category", "Raid|Abilities" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, StartupEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartupEffects_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartupEffects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_OnCharacterDied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DeathMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CharacterAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_DefaultAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartupEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_StartupEffects,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseCharacter, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseCharacter, IGameplayCueInterface), false },  // 885599697
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
		&ABaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<ABaseCharacter>()
	{
		return ABaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
	ABaseCharacter::~ABaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_BaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_BaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 1640044087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_BaseCharacter_h_1656202251(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_BaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

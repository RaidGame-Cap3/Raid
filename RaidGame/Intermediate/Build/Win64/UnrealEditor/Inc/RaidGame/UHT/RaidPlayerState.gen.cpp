// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Character/Player/RaidPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaidPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	RAIDGAME_API UClass* Z_Construct_UClass_ARaidPlayerState();
	RAIDGAME_API UClass* Z_Construct_UClass_ARaidPlayerState_NoRegister();
	RAIDGAME_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
	RAIDGAME_API UClass* Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	DEFINE_FUNCTION(ARaidPlayerState::execGetCharacterLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execGetAttackSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttackSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execGetMoveSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execGetArmor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetArmor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execGetManaRegenRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetManaRegenRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execGetHealthRegenRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthRegenRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaidPlayerState::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	void ARaidPlayerState::StaticRegisterNativesARaidPlayerState()
	{
		UClass* Class = ARaidPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArmor", &ARaidPlayerState::execGetArmor },
			{ "GetAttackSpeed", &ARaidPlayerState::execGetAttackSpeed },
			{ "GetCharacterLevel", &ARaidPlayerState::execGetCharacterLevel },
			{ "GetHealth", &ARaidPlayerState::execGetHealth },
			{ "GetHealthRegenRate", &ARaidPlayerState::execGetHealthRegenRate },
			{ "GetMana", &ARaidPlayerState::execGetMana },
			{ "GetManaRegenRate", &ARaidPlayerState::execGetManaRegenRate },
			{ "GetMaxHealth", &ARaidPlayerState::execGetMaxHealth },
			{ "GetMaxMana", &ARaidPlayerState::execGetMaxMana },
			{ "GetMoveSpeed", &ARaidPlayerState::execGetMoveSpeed },
			{ "IsAlive", &ARaidPlayerState::execIsAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics
	{
		struct RaidPlayerState_eventGetArmor_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetArmor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetArmor", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::RaidPlayerState_eventGetArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::RaidPlayerState_eventGetArmor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics
	{
		struct RaidPlayerState_eventGetAttackSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetAttackSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetAttackSpeed", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::RaidPlayerState_eventGetAttackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::RaidPlayerState_eventGetAttackSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics
	{
		struct RaidPlayerState_eventGetCharacterLevel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::RaidPlayerState_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::RaidPlayerState_eventGetCharacterLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics
	{
		struct RaidPlayerState_eventGetHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AttributeSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd getter\n// \xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf \n" },
#endif
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AttributeSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd getter\n\xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::RaidPlayerState_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::RaidPlayerState_eventGetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics
	{
		struct RaidPlayerState_eventGetHealthRegenRate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetHealthRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::RaidPlayerState_eventGetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::RaidPlayerState_eventGetHealthRegenRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics
	{
		struct RaidPlayerState_eventGetMana_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetMana", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::RaidPlayerState_eventGetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::RaidPlayerState_eventGetMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics
	{
		struct RaidPlayerState_eventGetManaRegenRate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetManaRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::RaidPlayerState_eventGetManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::RaidPlayerState_eventGetManaRegenRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics
	{
		struct RaidPlayerState_eventGetMaxHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::RaidPlayerState_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::RaidPlayerState_eventGetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics
	{
		struct RaidPlayerState_eventGetMaxMana_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetMaxMana", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::RaidPlayerState_eventGetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::RaidPlayerState_eventGetMaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics
	{
		struct RaidPlayerState_eventGetMoveSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidPlayerState_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState|Attributes" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "GetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::RaidPlayerState_eventGetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::RaidPlayerState_eventGetMoveSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics
	{
		struct RaidPlayerState_eventIsAlive_Parms
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
	void Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RaidPlayerState_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RaidPlayerState_eventIsAlive_Parms), &Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|PlayerState" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaidPlayerState, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::RaidPlayerState_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::RaidPlayerState_eventIsAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARaidPlayerState_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaidPlayerState_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaidPlayerState);
	UClass* Z_Construct_UClass_ARaidPlayerState_NoRegister()
	{
		return ARaidPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ARaidPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaidPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaidPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARaidPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARaidPlayerState_GetArmor, "GetArmor" }, // 1518332716
		{ &Z_Construct_UFunction_ARaidPlayerState_GetAttackSpeed, "GetAttackSpeed" }, // 1253634322
		{ &Z_Construct_UFunction_ARaidPlayerState_GetCharacterLevel, "GetCharacterLevel" }, // 2952152399
		{ &Z_Construct_UFunction_ARaidPlayerState_GetHealth, "GetHealth" }, // 501442002
		{ &Z_Construct_UFunction_ARaidPlayerState_GetHealthRegenRate, "GetHealthRegenRate" }, // 3170812198
		{ &Z_Construct_UFunction_ARaidPlayerState_GetMana, "GetMana" }, // 3338908117
		{ &Z_Construct_UFunction_ARaidPlayerState_GetManaRegenRate, "GetManaRegenRate" }, // 4203631064
		{ &Z_Construct_UFunction_ARaidPlayerState_GetMaxHealth, "GetMaxHealth" }, // 2639275896
		{ &Z_Construct_UFunction_ARaidPlayerState_GetMaxMana, "GetMaxMana" }, // 624877681
		{ &Z_Construct_UFunction_ARaidPlayerState_GetMoveSpeed, "GetMoveSpeed" }, // 3389885792
		{ &Z_Construct_UFunction_ARaidPlayerState_IsAlive, "IsAlive" }, // 2576166023
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaidPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Character/Player/RaidPlayerState.h" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaidPlayerState, AbilitySystemComponent), Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AttributeSetBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Player/RaidPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARaidPlayerState, AttributeSetBase), Z_Construct_UClass_UBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AttributeSetBase_MetaData), Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AttributeSetBase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaidPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaidPlayerState_Statics::NewProp_AttributeSetBase,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARaidPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ARaidPlayerState, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaidPlayerState_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaidPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaidPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaidPlayerState_Statics::ClassParams = {
		&ARaidPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARaidPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARaidPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARaidPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ARaidPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaidPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARaidPlayerState()
	{
		if (!Z_Registration_Info_UClass_ARaidPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaidPlayerState.OuterSingleton, Z_Construct_UClass_ARaidPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARaidPlayerState.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<ARaidPlayerState>()
	{
		return ARaidPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaidPlayerState);
	ARaidPlayerState::~ARaidPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARaidPlayerState, ARaidPlayerState::StaticClass, TEXT("ARaidPlayerState"), &Z_Registration_Info_UClass_ARaidPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaidPlayerState), 274149150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_4095737286(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Player_RaidPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

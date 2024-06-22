// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Character/Attributes/BaseAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	RAIDGAME_API UClass* Z_Construct_UClass_UBaseAttributeSet();
	RAIDGAME_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_AttackSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackSpeed(Z_Param_Out_OldAttackSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_CharacterLevel)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCharacterLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CharacterLevel(Z_Param_Out_OldCharacterLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MoveSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMoveSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MoveSpeed(Z_Param_Out_OldMoveSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Armor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_ManaRegenRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegenRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ManaRegenRate(Z_Param_Out_OldManaRegenRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_HealthRegenRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegenRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HealthRegenRate(Z_Param_Out_OldHealthRegenRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UBaseAttributeSet::StaticRegisterNativesUBaseAttributeSet()
	{
		UClass* Class = UBaseAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Armor", &UBaseAttributeSet::execOnRep_Armor },
			{ "OnRep_AttackSpeed", &UBaseAttributeSet::execOnRep_AttackSpeed },
			{ "OnRep_CharacterLevel", &UBaseAttributeSet::execOnRep_CharacterLevel },
			{ "OnRep_Health", &UBaseAttributeSet::execOnRep_Health },
			{ "OnRep_HealthRegenRate", &UBaseAttributeSet::execOnRep_HealthRegenRate },
			{ "OnRep_Mana", &UBaseAttributeSet::execOnRep_Mana },
			{ "OnRep_ManaRegenRate", &UBaseAttributeSet::execOnRep_ManaRegenRate },
			{ "OnRep_MaxHealth", &UBaseAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UBaseAttributeSet::execOnRep_MaxMana },
			{ "OnRep_MoveSpeed", &UBaseAttributeSet::execOnRep_MoveSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics
	{
		struct BaseAttributeSet_eventOnRep_Armor_Parms
		{
			FGameplayAttributeData OldArmor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*///UFUNCTION()\n//virtual void OnRep_Damage(const FGameplayAttributeData& OldValue);\n" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd//UFUNCTION()\n//virtual void OnRep_Damage(const FGameplayAttributeData& OldValue);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Armor", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::BaseAttributeSet_eventOnRep_Armor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::BaseAttributeSet_eventOnRep_Armor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics
	{
		struct BaseAttributeSet_eventOnRep_AttackSpeed_Parms
		{
			FGameplayAttributeData OldAttackSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed = { "OldAttackSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_AttackSpeed_Parms, OldAttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_AttackSpeed", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::BaseAttributeSet_eventOnRep_AttackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::BaseAttributeSet_eventOnRep_AttackSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics
	{
		struct BaseAttributeSet_eventOnRep_CharacterLevel_Parms
		{
			FGameplayAttributeData OldCharacterLevel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCharacterLevel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCharacterLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::NewProp_OldCharacterLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::NewProp_OldCharacterLevel = { "OldCharacterLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_CharacterLevel_Parms, OldCharacterLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::NewProp_OldCharacterLevel_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::NewProp_OldCharacterLevel_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::NewProp_OldCharacterLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_CharacterLevel", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::BaseAttributeSet_eventOnRep_CharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::BaseAttributeSet_eventOnRep_CharacterLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics
	{
		struct BaseAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::BaseAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::BaseAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics
	{
		struct BaseAttributeSet_eventOnRep_HealthRegenRate_Parms
		{
			FGameplayAttributeData OldHealthRegenRate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegenRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate = { "OldHealthRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_HealthRegenRate_Parms, OldHealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_HealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::BaseAttributeSet_eventOnRep_HealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::BaseAttributeSet_eventOnRep_HealthRegenRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics
	{
		struct BaseAttributeSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::BaseAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::BaseAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics
	{
		struct BaseAttributeSet_eventOnRep_ManaRegenRate_Parms
		{
			FGameplayAttributeData OldManaRegenRate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldManaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldManaRegenRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate = { "OldManaRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_ManaRegenRate_Parms, OldManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_ManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::BaseAttributeSet_eventOnRep_ManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::BaseAttributeSet_eventOnRep_ManaRegenRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics
	{
		struct BaseAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::BaseAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::BaseAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics
	{
		struct BaseAttributeSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::BaseAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::BaseAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics
	{
		struct BaseAttributeSet_eventOnRep_MoveSpeed_Parms
		{
			FGameplayAttributeData OldMoveSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMoveSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed = { "OldMoveSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAttributeSet_eventOnRep_MoveSpeed_Parms, OldMoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed_MetaData), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttributeSet, nullptr, "OnRep_MoveSpeed", nullptr, nullptr, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::BaseAttributeSet_eventOnRep_MoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::BaseAttributeSet_eventOnRep_MoveSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAttributeSet);
	UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister()
	{
		return UBaseAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UBaseAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 3951791708
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_AttackSpeed, "OnRep_AttackSpeed" }, // 837229140
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_CharacterLevel, "OnRep_CharacterLevel" }, // 1617200744
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Health, "OnRep_Health" }, // 3418017168
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_HealthRegenRate, "OnRep_HealthRegenRate" }, // 3651274191
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 750554004
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_ManaRegenRate, "OnRep_ManaRegenRate" }, // 1788554169
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 261122300
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 847771483
		{ &Z_Construct_UFunction_UBaseAttributeSet_OnRep_MoveSpeed, "OnRep_MoveSpeed" }, // 1815340724
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base attribute set class for the project.\n */" },
#endif
		{ "IncludePath", "Character/Attributes/BaseAttributeSet.h" },
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base attribute set class for the project." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd : \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd : \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd : \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbe\xee\xb3\xaf \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd : \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbe\xee\xb3\xaf \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "Attributes|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", "OnRep_HealthRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_HealthRegenRate_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_HealthRegenRate_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Attributes|Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd : \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd : \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Attributes|Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "Attributes|Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", "OnRep_ManaRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, ManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_ManaRegenRate_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_ManaRegenRate_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Attributes|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd : \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.*///, ReplicatedUsing = OnRep_Damage\n" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd : \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.//, ReplicatedUsing = OnRep_Damage" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Damage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Attributes|MoveSpeed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MoveSpeed affects how fast characters can move.\n" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MoveSpeed affects how fast characters can move." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MoveSpeed = { "MoveSpeed", "OnRep_MoveSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, MoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MoveSpeed_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MoveSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Attributes|AttackSpeed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AttackSpeed affects how fast characters can move.\n" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AttackSpeed affects how fast characters can move." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_AttackSpeed = { "AttackSpeed", "OnRep_AttackSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, AttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_AttackSpeed_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_AttackSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "Attributes|Character Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xb7\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd\xc9\xb5\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xb7\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd\xc9\xb5\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_CharacterLevel = { "CharacterLevel", "OnRep_CharacterLevel", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, CharacterLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_CharacterLevel_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_CharacterLevel_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Attributes|Armor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb0\xa8\n" },
#endif
		{ "ModuleRelativePath", "Character/Attributes/BaseAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb0\xa8" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Armor_MetaData), Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Armor_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_HealthRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_ManaRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_AttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_CharacterLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeSet_Statics::NewProp_Armor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams = {
		&UBaseAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton, Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<UBaseAttributeSet>()
	{
		return UBaseAttributeSet::StaticClass();
	}

	void UBaseAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_HealthRegenRate(TEXT("HealthRegenRate"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_ManaRegenRate(TEXT("ManaRegenRate"));
		static const FName Name_MoveSpeed(TEXT("MoveSpeed"));
		static const FName Name_AttackSpeed(TEXT("AttackSpeed"));
		static const FName Name_CharacterLevel(TEXT("CharacterLevel"));
		static const FName Name_Armor(TEXT("Armor"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_HealthRegenRate == ClassReps[(int32)ENetFields_Private::HealthRegenRate].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_ManaRegenRate == ClassReps[(int32)ENetFields_Private::ManaRegenRate].Property->GetFName()
			&& Name_MoveSpeed == ClassReps[(int32)ENetFields_Private::MoveSpeed].Property->GetFName()
			&& Name_AttackSpeed == ClassReps[(int32)ENetFields_Private::AttackSpeed].Property->GetFName()
			&& Name_CharacterLevel == ClassReps[(int32)ENetFields_Private::CharacterLevel].Property->GetFName()
			&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBaseAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAttributeSet);
	UBaseAttributeSet::~UBaseAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributeSet, UBaseAttributeSet::StaticClass, TEXT("UBaseAttributeSet"), &Z_Registration_Info_UClass_UBaseAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributeSet), 478807485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_4167045344(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Attributes_BaseAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

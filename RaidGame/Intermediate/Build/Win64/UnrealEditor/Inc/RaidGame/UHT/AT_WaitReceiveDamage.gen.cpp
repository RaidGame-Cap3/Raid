// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Character/Abilities/AbilityTasks/AT_WaitReceiveDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAT_WaitReceiveDamage() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	RAIDGAME_API UClass* Z_Construct_UClass_UAT_WaitReceiveDamage();
	RAIDGAME_API UClass* Z_Construct_UClass_UAT_WaitReceiveDamage_NoRegister();
	RAIDGAME_API UClass* Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics
	{
		struct _Script_RaidGame_eventWaitReceiveDamageDelegate_Parms
		{
			URaidAbilitySystemComponent* SourceASC;
			float UnmitigatedDamage;
			float MitigatedDamage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmitigatedDamage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MitigatedDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventWaitReceiveDamageDelegate_Parms, SourceASC), Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData), Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage = { "UnmitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventWaitReceiveDamageDelegate_Parms, UnmitigatedDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage = { "MitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventWaitReceiveDamageDelegate_Parms, MitigatedDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Abilities/AbilityTasks/AT_WaitReceiveDamage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RaidGame, nullptr, "WaitReceiveDamageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::_Script_RaidGame_eventWaitReceiveDamageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::_Script_RaidGame_eventWaitReceiveDamageDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitReceiveDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitReceiveDamageDelegate, URaidAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	struct _Script_RaidGame_eventWaitReceiveDamageDelegate_Parms
	{
		URaidAbilitySystemComponent* SourceASC;
		float UnmitigatedDamage;
		float MitigatedDamage;
	};
	_Script_RaidGame_eventWaitReceiveDamageDelegate_Parms Parms;
	Parms.SourceASC=SourceASC;
	Parms.UnmitigatedDamage=UnmitigatedDamage;
	Parms.MitigatedDamage=MitigatedDamage;
	WaitReceiveDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAT_WaitReceiveDamage::execWaitReceiveDamage)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_UBOOL(Z_Param_TriggerOnce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAT_WaitReceiveDamage**)Z_Param__Result=UAT_WaitReceiveDamage::WaitReceiveDamage(Z_Param_OwningAbility,Z_Param_TriggerOnce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAT_WaitReceiveDamage::execOnDamageReceived)
	{
		P_GET_OBJECT(URaidAbilitySystemComponent,Z_Param_SourceASC);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UnmitigatedDamage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MitigatedDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageReceived(Z_Param_SourceASC,Z_Param_UnmitigatedDamage,Z_Param_MitigatedDamage);
		P_NATIVE_END;
	}
	void UAT_WaitReceiveDamage::StaticRegisterNativesUAT_WaitReceiveDamage()
	{
		UClass* Class = UAT_WaitReceiveDamage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDamageReceived", &UAT_WaitReceiveDamage::execOnDamageReceived },
			{ "WaitReceiveDamage", &UAT_WaitReceiveDamage::execWaitReceiveDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics
	{
		struct AT_WaitReceiveDamage_eventOnDamageReceived_Parms
		{
			URaidAbilitySystemComponent* SourceASC;
			float UnmitigatedDamage;
			float MitigatedDamage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmitigatedDamage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MitigatedDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_WaitReceiveDamage_eventOnDamageReceived_Parms, SourceASC), Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::NewProp_SourceASC_MetaData), Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::NewProp_SourceASC_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::NewProp_UnmitigatedDamage = { "UnmitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_WaitReceiveDamage_eventOnDamageReceived_Parms, UnmitigatedDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::NewProp_MitigatedDamage = { "MitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_WaitReceiveDamage_eventOnDamageReceived_Parms, MitigatedDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::NewProp_SourceASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::NewProp_UnmitigatedDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::NewProp_MitigatedDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Abilities/AbilityTasks/AT_WaitReceiveDamage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAT_WaitReceiveDamage, nullptr, "OnDamageReceived", nullptr, nullptr, Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::AT_WaitReceiveDamage_eventOnDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::AT_WaitReceiveDamage_eventOnDamageReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics
	{
		struct AT_WaitReceiveDamage_eventWaitReceiveDamage_Parms
		{
			UGameplayAbility* OwningAbility;
			bool TriggerOnce;
			UAT_WaitReceiveDamage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static void NewProp_TriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_WaitReceiveDamage_eventWaitReceiveDamage_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
	{
		((AT_WaitReceiveDamage_eventWaitReceiveDamage_Parms*)Obj)->TriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AT_WaitReceiveDamage_eventWaitReceiveDamage_Parms), &Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_WaitReceiveDamage_eventWaitReceiveDamage_Parms, ReturnValue), Z_Construct_UClass_UAT_WaitReceiveDamage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::NewProp_TriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wait until the ability owner receives damage.\n" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Character/Abilities/AbilityTasks/AT_WaitReceiveDamage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the ability owner receives damage." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAT_WaitReceiveDamage, nullptr, "WaitReceiveDamage", nullptr, nullptr, Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::AT_WaitReceiveDamage_eventWaitReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::AT_WaitReceiveDamage_eventWaitReceiveDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAT_WaitReceiveDamage);
	UClass* Z_Construct_UClass_UAT_WaitReceiveDamage_NoRegister()
	{
		return UAT_WaitReceiveDamage::StaticClass();
	}
	struct Z_Construct_UClass_UAT_WaitReceiveDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDamage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAT_WaitReceiveDamage_OnDamageReceived, "OnDamageReceived" }, // 2512030225
		{ &Z_Construct_UFunction_UAT_WaitReceiveDamage_WaitReceiveDamage, "WaitReceiveDamage" }, // 1406660572
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Waits until the Ability Owner receives damage.\n */" },
#endif
		{ "IncludePath", "Character/Abilities/AbilityTasks/AT_WaitReceiveDamage.h" },
		{ "ModuleRelativePath", "Character/Abilities/AbilityTasks/AT_WaitReceiveDamage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waits until the Ability Owner receives damage." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::NewProp_OnDamage_MetaData[] = {
		{ "ModuleRelativePath", "Character/Abilities/AbilityTasks/AT_WaitReceiveDamage.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::NewProp_OnDamage = { "OnDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAT_WaitReceiveDamage, OnDamage), Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::NewProp_OnDamage_MetaData), Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::NewProp_OnDamage_MetaData) }; // 3628384954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::NewProp_OnDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAT_WaitReceiveDamage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::ClassParams = {
		&UAT_WaitReceiveDamage::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAT_WaitReceiveDamage()
	{
		if (!Z_Registration_Info_UClass_UAT_WaitReceiveDamage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAT_WaitReceiveDamage.OuterSingleton, Z_Construct_UClass_UAT_WaitReceiveDamage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAT_WaitReceiveDamage.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<UAT_WaitReceiveDamage>()
	{
		return UAT_WaitReceiveDamage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAT_WaitReceiveDamage);
	UAT_WaitReceiveDamage::~UAT_WaitReceiveDamage() {}
	struct Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAT_WaitReceiveDamage, UAT_WaitReceiveDamage::StaticClass, TEXT("UAT_WaitReceiveDamage"), &Z_Registration_Info_UClass_UAT_WaitReceiveDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAT_WaitReceiveDamage), 2720860865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_4188103123(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_AbilityTasks_AT_WaitReceiveDamage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

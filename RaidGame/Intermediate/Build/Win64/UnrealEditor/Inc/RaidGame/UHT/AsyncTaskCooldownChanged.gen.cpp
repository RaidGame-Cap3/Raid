// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Character/AsyncTaskCooldownChanged.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncTaskCooldownChanged() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	RAIDGAME_API UClass* Z_Construct_UClass_UAsyncTaskCooldownChanged();
	RAIDGAME_API UClass* Z_Construct_UClass_UAsyncTaskCooldownChanged_NoRegister();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics
	{
		struct _Script_RaidGame_eventOnCooldownChanged_Parms
		{
			FGameplayTag CooldownTag;
			float TimeRemaining;
			float Duration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventOnCooldownChanged_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventOnCooldownChanged_Parms, TimeRemaining), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventOnCooldownChanged_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/AsyncTaskCooldownChanged.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RaidGame, nullptr, "OnCooldownChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::_Script_RaidGame_eventOnCooldownChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::_Script_RaidGame_eventOnCooldownChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCooldownChanged, FGameplayTag CooldownTag, float TimeRemaining, float Duration)
{
	struct _Script_RaidGame_eventOnCooldownChanged_Parms
	{
		FGameplayTag CooldownTag;
		float TimeRemaining;
		float Duration;
	};
	_Script_RaidGame_eventOnCooldownChanged_Parms Parms;
	Parms.CooldownTag=CooldownTag;
	Parms.TimeRemaining=TimeRemaining;
	Parms.Duration=Duration;
	OnCooldownChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncTaskCooldownChanged::execEndTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncTaskCooldownChanged::execListenForCooldownChange)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CooldownTags);
		P_GET_UBOOL(Z_Param_UseServerCooldown);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncTaskCooldownChanged**)Z_Param__Result=UAsyncTaskCooldownChanged::ListenForCooldownChange(Z_Param_AbilitySystemComponent,Z_Param_CooldownTags,Z_Param_UseServerCooldown);
		P_NATIVE_END;
	}
	void UAsyncTaskCooldownChanged::StaticRegisterNativesUAsyncTaskCooldownChanged()
	{
		UClass* Class = UAsyncTaskCooldownChanged::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTask", &UAsyncTaskCooldownChanged::execEndTask },
			{ "ListenForCooldownChange", &UAsyncTaskCooldownChanged::execListenForCooldownChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncTaskCooldownChanged_EndTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTaskCooldownChanged_EndTask_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
#endif
		{ "ModuleRelativePath", "Character/AsyncTaskCooldownChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskCooldownChanged_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskCooldownChanged, nullptr, "EndTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskCooldownChanged_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskCooldownChanged_EndTask_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAsyncTaskCooldownChanged_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskCooldownChanged_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics
	{
		struct AsyncTaskCooldownChanged_eventListenForCooldownChange_Parms
		{
			UAbilitySystemComponent* AbilitySystemComponent;
			FGameplayTagContainer CooldownTags;
			bool UseServerCooldown;
			UAsyncTaskCooldownChanged* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
		static void NewProp_UseServerCooldown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseServerCooldown;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskCooldownChanged_eventListenForCooldownChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskCooldownChanged_eventListenForCooldownChange_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	void Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldown_SetBit(void* Obj)
	{
		((AsyncTaskCooldownChanged_eventListenForCooldownChange_Parms*)Obj)->UseServerCooldown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldown = { "UseServerCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTaskCooldownChanged_eventListenForCooldownChange_Parms), &Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldown_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskCooldownChanged_eventListenForCooldownChange_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskCooldownChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_CooldownTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.\n// UseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.\n// If using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun.\n" },
#endif
		{ "ModuleRelativePath", "Character/AsyncTaskCooldownChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.\nUseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.\nIf using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskCooldownChanged, nullptr, "ListenForCooldownChange", nullptr, nullptr, Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::AsyncTaskCooldownChanged_eventListenForCooldownChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::AsyncTaskCooldownChanged_eventListenForCooldownChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncTaskCooldownChanged);
	UClass* Z_Construct_UClass_UAsyncTaskCooldownChanged_NoRegister()
	{
		return UAsyncTaskCooldownChanged::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTaskCooldownChanged_EndTask, "EndTask" }, // 774815671
		{ &Z_Construct_UFunction_UAsyncTaskCooldownChanged_ListenForCooldownChange, "ListenForCooldownChange" }, // 895187108
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Character/AsyncTaskCooldownChanged.h" },
		{ "ModuleRelativePath", "Character/AsyncTaskCooldownChanged.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin_MetaData[] = {
		{ "ModuleRelativePath", "Character/AsyncTaskCooldownChanged.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin = { "OnCooldownBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskCooldownChanged, OnCooldownBegin), Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin_MetaData), Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin_MetaData) }; // 70714063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd_MetaData[] = {
		{ "ModuleRelativePath", "Character/AsyncTaskCooldownChanged.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd = { "OnCooldownEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskCooldownChanged, OnCooldownEnd), Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd_MetaData), Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd_MetaData) }; // 70714063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AsyncTaskCooldownChanged.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskCooldownChanged, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_ASC_MetaData), Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::NewProp_ASC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTaskCooldownChanged>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::ClassParams = {
		&UAsyncTaskCooldownChanged::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAsyncTaskCooldownChanged()
	{
		if (!Z_Registration_Info_UClass_UAsyncTaskCooldownChanged.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTaskCooldownChanged.OuterSingleton, Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncTaskCooldownChanged.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<UAsyncTaskCooldownChanged>()
	{
		return UAsyncTaskCooldownChanged::StaticClass();
	}
	UAsyncTaskCooldownChanged::UAsyncTaskCooldownChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskCooldownChanged);
	UAsyncTaskCooldownChanged::~UAsyncTaskCooldownChanged() {}
	struct Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskCooldownChanged_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskCooldownChanged_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTaskCooldownChanged, UAsyncTaskCooldownChanged::StaticClass, TEXT("UAsyncTaskCooldownChanged"), &Z_Registration_Info_UClass_UAsyncTaskCooldownChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTaskCooldownChanged), 1715343828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskCooldownChanged_h_3305419719(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskCooldownChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskCooldownChanged_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

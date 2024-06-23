// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Character/AsyncTaskEffectStackChanged.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncTaskEffectStackChanged() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	RAIDGAME_API UClass* Z_Construct_UClass_UAsyncTaskEffectStackChanged();
	RAIDGAME_API UClass* Z_Construct_UClass_UAsyncTaskEffectStackChanged_NoRegister();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics
	{
		struct _Script_RaidGame_eventOnGameplayEffectStackChanged_Parms
		{
			FGameplayTag EffectGameplayTag;
			FActiveGameplayEffectHandle Handle;
			int32 NewStackCount;
			int32 OldStackCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectGameplayTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldStackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_EffectGameplayTag = { "EffectGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventOnGameplayEffectStackChanged_Parms, EffectGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventOnGameplayEffectStackChanged_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventOnGameplayEffectStackChanged_Parms, NewStackCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventOnGameplayEffectStackChanged_Parms, OldStackCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_EffectGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_NewStackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_OldStackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/AsyncTaskEffectStackChanged.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RaidGame, nullptr, "OnGameplayEffectStackChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::_Script_RaidGame_eventOnGameplayEffectStackChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::_Script_RaidGame_eventOnGameplayEffectStackChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGameplayEffectStackChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameplayEffectStackChanged, FGameplayTag EffectGameplayTag, FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount)
{
	struct _Script_RaidGame_eventOnGameplayEffectStackChanged_Parms
	{
		FGameplayTag EffectGameplayTag;
		FActiveGameplayEffectHandle Handle;
		int32 NewStackCount;
		int32 OldStackCount;
	};
	_Script_RaidGame_eventOnGameplayEffectStackChanged_Parms Parms;
	Parms.EffectGameplayTag=EffectGameplayTag;
	Parms.Handle=Handle;
	Parms.NewStackCount=NewStackCount;
	Parms.OldStackCount=OldStackCount;
	OnGameplayEffectStackChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncTaskEffectStackChanged::execEndTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncTaskEffectStackChanged::execListenForGameplayEffectStackChange)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayTag,Z_Param_EffectGameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncTaskEffectStackChanged**)Z_Param__Result=UAsyncTaskEffectStackChanged::ListenForGameplayEffectStackChange(Z_Param_AbilitySystemComponent,Z_Param_EffectGameplayTag);
		P_NATIVE_END;
	}
	void UAsyncTaskEffectStackChanged::StaticRegisterNativesUAsyncTaskEffectStackChanged()
	{
		UClass* Class = UAsyncTaskEffectStackChanged::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTask", &UAsyncTaskEffectStackChanged::execEndTask },
			{ "ListenForGameplayEffectStackChange", &UAsyncTaskEffectStackChanged::execListenForGameplayEffectStackChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncTaskEffectStackChanged_EndTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTaskEffectStackChanged_EndTask_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
#endif
		{ "ModuleRelativePath", "Character/AsyncTaskEffectStackChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskEffectStackChanged_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskEffectStackChanged, nullptr, "EndTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskEffectStackChanged_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskEffectStackChanged_EndTask_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAsyncTaskEffectStackChanged_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskEffectStackChanged_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics
	{
		struct AsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms
		{
			UAbilitySystemComponent* AbilitySystemComponent;
			FGameplayTag EffectGameplayTag;
			UAsyncTaskEffectStackChanged* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectGameplayTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_EffectGameplayTag = { "EffectGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms, EffectGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskEffectStackChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_EffectGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Character/AsyncTaskEffectStackChanged.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskEffectStackChanged, nullptr, "ListenForGameplayEffectStackChange", nullptr, nullptr, Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::AsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::AsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncTaskEffectStackChanged);
	UClass* Z_Construct_UClass_UAsyncTaskEffectStackChanged_NoRegister()
	{
		return UAsyncTaskEffectStackChanged::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectStackChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectStackChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTaskEffectStackChanged_EndTask, "EndTask" }, // 2629594468
		{ &Z_Construct_UFunction_UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange, "ListenForGameplayEffectStackChange" }, // 2559935306
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint node to automatically register a listener for changes to a GameplayEffect's stack count based on an Asset or Granted tag on the Effect.\n * Useful to use in UI.\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Character/AsyncTaskEffectStackChanged.h" },
		{ "ModuleRelativePath", "Character/AsyncTaskEffectStackChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint node to automatically register a listener for changes to a GameplayEffect's stack count based on an Asset or Granted tag on the Effect.\nUseful to use in UI." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange_MetaData[] = {
		{ "ModuleRelativePath", "Character/AsyncTaskEffectStackChanged.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange = { "OnGameplayEffectStackChange", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskEffectStackChanged, OnGameplayEffectStackChange), Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange_MetaData), Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange_MetaData) }; // 718337961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AsyncTaskEffectStackChanged.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskEffectStackChanged, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_ASC_MetaData), Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::NewProp_ASC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTaskEffectStackChanged>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::ClassParams = {
		&UAsyncTaskEffectStackChanged::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAsyncTaskEffectStackChanged()
	{
		if (!Z_Registration_Info_UClass_UAsyncTaskEffectStackChanged.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTaskEffectStackChanged.OuterSingleton, Z_Construct_UClass_UAsyncTaskEffectStackChanged_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncTaskEffectStackChanged.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<UAsyncTaskEffectStackChanged>()
	{
		return UAsyncTaskEffectStackChanged::StaticClass();
	}
	UAsyncTaskEffectStackChanged::UAsyncTaskEffectStackChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskEffectStackChanged);
	UAsyncTaskEffectStackChanged::~UAsyncTaskEffectStackChanged() {}
	struct Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTaskEffectStackChanged, UAsyncTaskEffectStackChanged::StaticClass, TEXT("UAsyncTaskEffectStackChanged"), &Z_Registration_Info_UClass_UAsyncTaskEffectStackChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTaskEffectStackChanged), 3878635848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_4139032220(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_Character_AsyncTaskEffectStackChanged_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

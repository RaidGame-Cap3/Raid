// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Character/Abilities/RaidGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaidGameplayAbility() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	RAIDGAME_API UClass* Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister();
	RAIDGAME_API UClass* Z_Construct_UClass_URaidGameplayAbility();
	RAIDGAME_API UClass* Z_Construct_UClass_URaidGameplayAbility_NoRegister();
	RAIDGAME_API UEnum* Z_Construct_UEnum_RaidGame_RaidAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	DEFINE_FUNCTION(URaidGameplayAbility::execGetRaidAbilitySystemComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URaidAbilitySystemComponent**)Z_Param__Result=P_THIS->GetRaidAbilitySystemComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URaidGameplayAbility::execGetControllerFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AController**)Z_Param__Result=P_THIS->GetControllerFromActorInfo();
		P_NATIVE_END;
	}
	void URaidGameplayAbility::StaticRegisterNativesURaidGameplayAbility()
	{
		UClass* Class = URaidGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerFromActorInfo", &URaidGameplayAbility::execGetControllerFromActorInfo },
			{ "GetRaidAbilitySystemComponentFromActorInfo", &URaidGameplayAbility::execGetRaidAbilitySystemComponentFromActorInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics
	{
		struct RaidGameplayAbility_eventGetControllerFromActorInfo_Parms
		{
			AController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidGameplayAbility_eventGetControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb7\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb4\xef\xbf\xbd. \n" },
#endif
		{ "ModuleRelativePath", "Character/Abilities/RaidGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb7\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URaidGameplayAbility, nullptr, "GetControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::RaidGameplayAbility_eventGetControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::RaidGameplayAbility_eventGetControllerFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics
	{
		struct RaidGameplayAbility_eventGetRaidAbilitySystemComponentFromActorInfo_Parms
		{
			URaidAbilitySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RaidGameplayAbility_eventGetRaidAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Raid|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Raid|Ability\")\n//ARaidPlayerController* GetRaidPlayerControllerFromActorInfo() const;\n" },
#endif
		{ "ModuleRelativePath", "Character/Abilities/RaidGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Raid|Ability\")\nARaidPlayerController* GetRaidPlayerControllerFromActorInfo() const;" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URaidGameplayAbility, nullptr, "GetRaidAbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::RaidGameplayAbility_eventGetRaidAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::RaidGameplayAbility_eventGetRaidAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URaidGameplayAbility);
	UClass* Z_Construct_UClass_URaidGameplayAbility_NoRegister()
	{
		return URaidGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_URaidGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivateAbilityOnGranted_MetaData[];
#endif
		static void NewProp_ActivateAbilityOnGranted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateAbilityOnGranted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URaidGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URaidGameplayAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URaidGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URaidGameplayAbility_GetControllerFromActorInfo, "GetControllerFromActorInfo" }, // 3942168683
		{ &Z_Construct_UFunction_URaidGameplayAbility_GetRaidAbilitySystemComponentFromActorInfo, "GetRaidAbilitySystemComponentFromActorInfo" }, // 3445599553
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URaidGameplayAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URaidGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/Abilities/RaidGameplayAbility.h" },
		{ "ModuleRelativePath", "Character/Abilities/RaidGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Raid|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///UGameplayAbility\n// \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc \xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Character/Abilities/RaidGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGameplayAbility\n \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc \xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URaidGameplayAbility, AbilityInputID), Z_Construct_UEnum_RaidGame_RaidAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityInputID_MetaData), Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityInputID_MetaData) }; // 1594016707
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityID_MetaData[] = {
		{ "Category", "Raid|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc \xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xd0\xbd\xc3\xba\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Character/Abilities/RaidGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc \xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xd0\xbd\xc3\xba\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URaidGameplayAbility, AbilityID), Z_Construct_UEnum_RaidGame_RaidAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityID_MetaData), Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityID_MetaData) }; // 1594016707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_MetaData[] = {
		{ "Category", "Raid|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc \xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Character/Abilities/RaidGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc \xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	void Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_SetBit(void* Obj)
	{
		((URaidGameplayAbility*)Obj)->ActivateAbilityOnGranted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted = { "ActivateAbilityOnGranted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URaidGameplayAbility), &Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_MetaData), Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URaidGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityInputID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_AbilityID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URaidGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URaidGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URaidGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URaidGameplayAbility_Statics::ClassParams = {
		&URaidGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URaidGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URaidGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URaidGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_URaidGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URaidGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URaidGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_URaidGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URaidGameplayAbility.OuterSingleton, Z_Construct_UClass_URaidGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URaidGameplayAbility.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<URaidGameplayAbility>()
	{
		return URaidGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URaidGameplayAbility);
	URaidGameplayAbility::~URaidGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URaidGameplayAbility, URaidGameplayAbility::StaticClass, TEXT("URaidGameplayAbility"), &Z_Registration_Info_UClass_URaidGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URaidGameplayAbility), 3905113542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_3649679469(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_Abilities_RaidGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

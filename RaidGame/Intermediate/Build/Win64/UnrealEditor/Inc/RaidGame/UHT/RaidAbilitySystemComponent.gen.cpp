// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Character/RaidAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaidAbilitySystemComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	RAIDGAME_API UClass* Z_Construct_UClass_URaidAbilitySystemComponent();
	RAIDGAME_API UClass* Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics
	{
		struct _Script_RaidGame_eventReceivedDamageDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventReceivedDamageDelegate_Parms, SourceASC), Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData), Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage = { "UnmitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventReceivedDamageDelegate_Parms, UnmitigatedDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage = { "MitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RaidGame_eventReceivedDamageDelegate_Parms, MitigatedDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd \xef\xbf\xbd\xda\xb5\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UE_DEFINE_GAMEPLAY_TAG\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xb2\xef\xbf\xbd NativeGameplayTags\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//RAID_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_AbilityInputBlocked);\n" },
#endif
		{ "ModuleRelativePath", "Character/RaidAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd \xef\xbf\xbd\xda\xb5\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UE_DEFINE_GAMEPLAY_TAG\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xb2\xef\xbf\xbd NativeGameplayTags\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nRAID_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_AbilityInputBlocked);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RaidGame, nullptr, "ReceivedDamageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::_Script_RaidGame_eventReceivedDamageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::_Script_RaidGame_eventReceivedDamageDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FReceivedDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceivedDamageDelegate, URaidAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	struct _Script_RaidGame_eventReceivedDamageDelegate_Parms
	{
		URaidAbilitySystemComponent* SourceASC;
		float UnmitigatedDamage;
		float MitigatedDamage;
	};
	_Script_RaidGame_eventReceivedDamageDelegate_Parms Parms;
	Parms.SourceASC=SourceASC;
	Parms.UnmitigatedDamage=UnmitigatedDamage;
	Parms.MitigatedDamage=MitigatedDamage;
	ReceivedDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void URaidAbilitySystemComponent::StaticRegisterNativesURaidAbilitySystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URaidAbilitySystemComponent);
	UClass* Z_Construct_UClass_URaidAbilitySystemComponent_NoRegister()
	{
		return URaidAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_URaidAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URaidAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URaidAbilitySystemComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URaidAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n * * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae(ASC)\n * \n * \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Character/RaidAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Character/RaidAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae(ASC)\n\n\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URaidAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URaidAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URaidAbilitySystemComponent_Statics::ClassParams = {
		&URaidAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URaidAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URaidAbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URaidAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_URaidAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URaidAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_URaidAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URaidAbilitySystemComponent.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<URaidAbilitySystemComponent>()
	{
		return URaidAbilitySystemComponent::StaticClass();
	}
	URaidAbilitySystemComponent::URaidAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URaidAbilitySystemComponent);
	URaidAbilitySystemComponent::~URaidAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_RaidAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_RaidAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URaidAbilitySystemComponent, URaidAbilitySystemComponent::StaticClass, TEXT("URaidAbilitySystemComponent"), &Z_Registration_Info_UClass_URaidAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URaidAbilitySystemComponent), 2939669392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_RaidAbilitySystemComponent_h_537035928(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_RaidAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_Character_RaidAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Character/Attributes/Execution/DamageExecutionCalc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageExecutionCalc() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	RAIDGAME_API UClass* Z_Construct_UClass_UDamageExecutionCalc();
	RAIDGAME_API UClass* Z_Construct_UClass_UDamageExecutionCalc_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	void UDamageExecutionCalc::StaticRegisterNativesUDamageExecutionCalc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageExecutionCalc);
	UClass* Z_Construct_UClass_UDamageExecutionCalc_NoRegister()
	{
		return UDamageExecutionCalc::StaticClass();
	}
	struct Z_Construct_UClass_UDamageExecutionCalc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageExecutionCalc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageExecutionCalc_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageExecutionCalc_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/Attributes/Execution/DamageExecutionCalc.h" },
		{ "ModuleRelativePath", "Character/Attributes/Execution/DamageExecutionCalc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageExecutionCalc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageExecutionCalc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageExecutionCalc_Statics::ClassParams = {
		&UDamageExecutionCalc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageExecutionCalc_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageExecutionCalc_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDamageExecutionCalc()
	{
		if (!Z_Registration_Info_UClass_UDamageExecutionCalc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageExecutionCalc.OuterSingleton, Z_Construct_UClass_UDamageExecutionCalc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageExecutionCalc.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<UDamageExecutionCalc>()
	{
		return UDamageExecutionCalc::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageExecutionCalc);
	UDamageExecutionCalc::~UDamageExecutionCalc() {}
	struct Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_Attributes_Execution_DamageExecutionCalc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_Attributes_Execution_DamageExecutionCalc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageExecutionCalc, UDamageExecutionCalc::StaticClass, TEXT("UDamageExecutionCalc"), &Z_Registration_Info_UClass_UDamageExecutionCalc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageExecutionCalc), 1462499736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_Attributes_Execution_DamageExecutionCalc_h_1167073860(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_Attributes_Execution_DamageExecutionCalc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Character_Attributes_Execution_DamageExecutionCalc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

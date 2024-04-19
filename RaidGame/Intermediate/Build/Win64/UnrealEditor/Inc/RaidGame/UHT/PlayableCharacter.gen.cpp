// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/Public/PlayableCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayableCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	RAIDGAME_API UClass* Z_Construct_UClass_APlayableCharacter();
	RAIDGAME_API UClass* Z_Construct_UClass_APlayableCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	void APlayableCharacter::StaticRegisterNativesAPlayableCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayableCharacter);
	UClass* Z_Construct_UClass_APlayableCharacter_NoRegister()
	{
		return APlayableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayableCharacter.h" },
		{ "ModuleRelativePath", "Public/PlayableCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayableCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayableCharacter_Statics::ClassParams = {
		&APlayableCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayableCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APlayableCharacter()
	{
		if (!Z_Registration_Info_UClass_APlayableCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayableCharacter.OuterSingleton, Z_Construct_UClass_APlayableCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayableCharacter.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<APlayableCharacter>()
	{
		return APlayableCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayableCharacter);
	APlayableCharacter::~APlayableCharacter() {}
	struct Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Public_PlayableCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Public_PlayableCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayableCharacter, APlayableCharacter::StaticClass, TEXT("APlayableCharacter"), &Z_Registration_Info_UClass_APlayableCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayableCharacter), 3392588577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Public_PlayableCharacter_h_1310233379(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Public_PlayableCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RaidGame_Source_RaidGame_Public_PlayableCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/RaidGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaidGameGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RAIDGAME_API UClass* Z_Construct_UClass_ARaidGameGameMode();
	RAIDGAME_API UClass* Z_Construct_UClass_ARaidGameGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	void ARaidGameGameMode::StaticRegisterNativesARaidGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaidGameGameMode);
	UClass* Z_Construct_UClass_ARaidGameGameMode_NoRegister()
	{
		return ARaidGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARaidGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaidGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RaidGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARaidGameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaidGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RaidGameGameMode.h" },
		{ "ModuleRelativePath", "RaidGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaidGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaidGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaidGameGameMode_Statics::ClassParams = {
		&ARaidGameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARaidGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARaidGameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARaidGameGameMode()
	{
		if (!Z_Registration_Info_UClass_ARaidGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaidGameGameMode.OuterSingleton, Z_Construct_UClass_ARaidGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARaidGameGameMode.OuterSingleton;
	}
	template<> RAIDGAME_API UClass* StaticClass<ARaidGameGameMode>()
	{
		return ARaidGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaidGameGameMode);
	ARaidGameGameMode::~ARaidGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_RaidGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_RaidGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARaidGameGameMode, ARaidGameGameMode::StaticClass, TEXT("ARaidGameGameMode"), &Z_Registration_Info_UClass_ARaidGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaidGameGameMode), 2389783391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_RaidGameGameMode_h_3571114251(TEXT("/Script/RaidGame"),
		Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_RaidGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Raid_RaidGame_Source_RaidGame_RaidGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

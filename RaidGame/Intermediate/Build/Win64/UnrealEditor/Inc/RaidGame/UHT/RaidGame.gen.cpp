// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaidGame/RaidGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaidGame() {}
// Cross Module References
	RAIDGAME_API UEnum* Z_Construct_UEnum_RaidGame_RaidAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_RaidGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_RaidAbilityInputID;
	static UEnum* RaidAbilityInputID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_RaidAbilityInputID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_RaidAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RaidGame_RaidAbilityInputID, (UObject*)Z_Construct_UPackage__Script_RaidGame(), TEXT("RaidAbilityInputID"));
		}
		return Z_Registration_Info_UEnum_RaidAbilityInputID.OuterSingleton;
	}
	template<> RAIDGAME_API UEnum* StaticEnum<RaidAbilityInputID>()
	{
		return RaidAbilityInputID_StaticEnum();
	}
	struct Z_Construct_UEnum_RaidGame_RaidAbilityInputID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RaidGame_RaidAbilityInputID_Statics::Enumerators[] = {
		{ "RaidAbilityInputID::None", (int64)RaidAbilityInputID::None },
		{ "RaidAbilityInputID::Confirm", (int64)RaidAbilityInputID::Confirm },
		{ "RaidAbilityInputID::Cancel", (int64)RaidAbilityInputID::Cancel },
		{ "RaidAbilityInputID::Ability1", (int64)RaidAbilityInputID::Ability1 },
		{ "RaidAbilityInputID::Ability2", (int64)RaidAbilityInputID::Ability2 },
		{ "RaidAbilityInputID::Ability3", (int64)RaidAbilityInputID::Ability3 },
		{ "RaidAbilityInputID::Ability4", (int64)RaidAbilityInputID::Ability4 },
		{ "RaidAbilityInputID::Ability5", (int64)RaidAbilityInputID::Ability5 },
		{ "RaidAbilityInputID::Ability6", (int64)RaidAbilityInputID::Ability6 },
		{ "RaidAbilityInputID::Ability7", (int64)RaidAbilityInputID::Ability7 },
		{ "RaidAbilityInputID::Ability8", (int64)RaidAbilityInputID::Ability8 },
		{ "RaidAbilityInputID::BasicAttack", (int64)RaidAbilityInputID::BasicAttack },
		{ "RaidAbilityInputID::Sprint", (int64)RaidAbilityInputID::Sprint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RaidGame_RaidAbilityInputID_Statics::Enum_MetaDataParams[] = {
		{ "Ability1.Comment", "// 3 LMB (Q)\n" },
		{ "Ability1.DisplayName", "Ability1" },
		{ "Ability1.Name", "RaidAbilityInputID::Ability1" },
		{ "Ability1.ToolTip", "3 LMB (Q)" },
		{ "Ability2.Comment", "// 4 RMB (W)\n" },
		{ "Ability2.DisplayName", "Ability2" },
		{ "Ability2.Name", "RaidAbilityInputID::Ability2" },
		{ "Ability2.ToolTip", "4 RMB (W)" },
		{ "Ability3.Comment", "// 5 E\n" },
		{ "Ability3.DisplayName", "Ability3" },
		{ "Ability3.Name", "RaidAbilityInputID::Ability3" },
		{ "Ability3.ToolTip", "5 E" },
		{ "Ability4.Comment", "// 6 R\n" },
		{ "Ability4.DisplayName", "Ability4" },
		{ "Ability4.Name", "RaidAbilityInputID::Ability4" },
		{ "Ability4.ToolTip", "6 R" },
		{ "Ability5.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// 7\n" },
		{ "Ability5.DisplayName", "Ability5" },
		{ "Ability5.Name", "RaidAbilityInputID::Ability5" },
		{ "Ability5.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xaf \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n7" },
		{ "Ability6.Comment", "// 8 \n" },
		{ "Ability6.DisplayName", "Ability6" },
		{ "Ability6.Name", "RaidAbilityInputID::Ability6" },
		{ "Ability6.ToolTip", "8" },
		{ "Ability7.Comment", "// 9 \n" },
		{ "Ability7.DisplayName", "Ability7" },
		{ "Ability7.Name", "RaidAbilityInputID::Ability7" },
		{ "Ability7.ToolTip", "9" },
		{ "Ability8.Comment", "// 10 \n" },
		{ "Ability8.DisplayName", "Ability8" },
		{ "Ability8.Name", "RaidAbilityInputID::Ability8" },
		{ "Ability8.ToolTip", "10" },
		{ "BasicAttack.Comment", "// 11 A\n" },
		{ "BasicAttack.DisplayName", "BasicAttack" },
		{ "BasicAttack.Name", "RaidAbilityInputID::BasicAttack" },
		{ "BasicAttack.ToolTip", "11 A" },
		{ "BlueprintType", "true" },
		{ "Cancel.Comment", "// 2 Cancel\n" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "RaidAbilityInputID::Cancel" },
		{ "Cancel.ToolTip", "2 Cancel" },
		{ "Confirm.Comment", "// 1 Confirm\n" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "RaidAbilityInputID::Confirm" },
		{ "Confirm.ToolTip", "1 Confirm" },
		{ "ModuleRelativePath", "RaidGame.h" },
		{ "None.Comment", "// 0 None\n" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "RaidAbilityInputID::None" },
		{ "None.ToolTip", "0 None" },
		{ "Sprint.Comment", "// 12 Space\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Sprint.DisplayName", "Sprint" },
		{ "Sprint.Name", "RaidAbilityInputID::Sprint" },
		{ "Sprint.ToolTip", "12 Space\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RaidGame_RaidAbilityInputID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RaidGame,
		nullptr,
		"RaidAbilityInputID",
		"RaidAbilityInputID",
		Z_Construct_UEnum_RaidGame_RaidAbilityInputID_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RaidGame_RaidAbilityInputID_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RaidGame_RaidAbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RaidGame_RaidAbilityInputID_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_RaidGame_RaidAbilityInputID()
	{
		if (!Z_Registration_Info_UEnum_RaidAbilityInputID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_RaidAbilityInputID.InnerSingleton, Z_Construct_UEnum_RaidGame_RaidAbilityInputID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_RaidAbilityInputID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_RaidGame_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_RaidGame_h_Statics::EnumInfo[] = {
		{ RaidAbilityInputID_StaticEnum, TEXT("RaidAbilityInputID"), &Z_Registration_Info_UEnum_RaidAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1594016707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_RaidGame_h_2365988143(TEXT("/Script/RaidGame"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_RaidGame_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kjk16_Documents_GitHub_Raid_RaidGame_Source_RaidGame_RaidGame_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaidGame_init() {}
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_OnAttributeChanged__DelegateSignature();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature();
	RAIDGAME_API UFunction* Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RaidGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RaidGame()
	{
		if (!Z_Registration_Info_UPackage__Script_RaidGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RaidGame_DeathEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RaidGame_OnAttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RaidGame_OnCooldownChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RaidGame_OnGameplayEffectStackChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RaidGame_ReceivedDamageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RaidGame_WaitReceiveDamageDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RaidGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x95FAB818,
				0xBF522163,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RaidGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RaidGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RaidGame(Z_Construct_UPackage__Script_RaidGame, TEXT("/Script/RaidGame"), Z_Registration_Info_UPackage__Script_RaidGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x95FAB818, 0xBF522163));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

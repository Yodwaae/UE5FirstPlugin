// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x19DBC882,
				0xD8DC7B45,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstPlugin(Z_Construct_UPackage__Script_FirstPlugin, TEXT("/Script/FirstPlugin"), Z_Registration_Info_UPackage__Script_FirstPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x19DBC882, 0xD8DC7B45));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

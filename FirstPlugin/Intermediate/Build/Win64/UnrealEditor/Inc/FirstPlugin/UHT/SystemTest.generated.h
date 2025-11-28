// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SystemTest.h"

#ifdef FIRSTPLUGIN_SystemTest_generated_h
#error "SystemTest.generated.h already included, missing '#pragma once' in SystemTest.h"
#endif
#define FIRSTPLUGIN_SystemTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FLinearColor;

// ********** Begin Class USystemTest **************************************************************
#define FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProutText);


FIRSTPLUGIN_API UClass* Z_Construct_UClass_USystemTest_NoRegister();

#define FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSystemTest(); \
	friend struct Z_Construct_UClass_USystemTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FIRSTPLUGIN_API UClass* Z_Construct_UClass_USystemTest_NoRegister(); \
public: \
	DECLARE_CLASS2(USystemTest, UKismetSystemLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstPlugin"), Z_Construct_UClass_USystemTest_NoRegister) \
	DECLARE_SERIALIZER(USystemTest)


#define FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIRSTPLUGIN_API USystemTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USystemTest(USystemTest&&) = delete; \
	USystemTest(const USystemTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIRSTPLUGIN_API, USystemTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USystemTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USystemTest) \
	FIRSTPLUGIN_API virtual ~USystemTest();


#define FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h_13_PROLOG
#define FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USystemTest;

// ********** End Class USystemTest ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

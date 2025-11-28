// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemTest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSystemTest() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UKismetSystemLibrary();
FIRSTPLUGIN_API UClass* Z_Construct_UClass_USystemTest();
FIRSTPLUGIN_API UClass* Z_Construct_UClass_USystemTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USystemTest Function ProutText *******************************************
struct Z_Construct_UFunction_USystemTest_ProutText_Statics
{
	struct SystemTest_eventProutText_Parms
	{
		const UObject* WorldContextObject;
		bool bPrintToScreen;
		bool bPrintToLog;
		FLinearColor TextColor;
		float Duration;
		FName Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Prout text to the log, and optionally, to the screen\n\x09 * If Print To Log is true, it will be visible in the Output Log window.  Otherwise it will be logged only as 'Verbose', so it generally won't show up.\n\x09 *\n\x09 * @param\x09""bPrintToScreen\x09Whether or not to print the output to the screen\n\x09 * @param\x09""bPrintToLog\x09\x09Whether or not to print the output to the log\n\x09 * @param\x09""bPrintToConsole\x09Whether or not to print the output to the console\n\x09 * @param\x09TextColor\x09\x09The color of the text to display\n\x09 * @param\x09""Duration\x09\x09The display duration (if Print to Screen is True). Using negative number will result in loading the duration time from the config.\n\x09 * @param\x09Key\x09\x09\x09\x09If a non-empty key is provided, the message will replace any existing on-screen messages with the same key.\n\x09 */" },
#endif
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_Key", "None" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log, prout" },
		{ "ModuleRelativePath", "Public/SystemTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prout text to the log, and optionally, to the screen\nIf Print To Log is true, it will be visible in the Output Log window.  Otherwise it will be logged only as 'Verbose', so it generally won't show up.\n\n@param       bPrintToScreen  Whether or not to print the output to the screen\n@param       bPrintToLog             Whether or not to print the output to the log\n@param       bPrintToConsole Whether or not to print the output to the console\n@param       TextColor               The color of the text to display\n@param       Duration                The display duration (if Print to Screen is True). Using negative number will result in loading the duration time from the config.\n@param       Key                             If a non-empty key is provided, the message will replace any existing on-screen messages with the same key." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_bPrintToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
	static void NewProp_bPrintToLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SystemTest_eventProutText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
{
	((SystemTest_eventProutText_Parms*)Obj)->bPrintToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SystemTest_eventProutText_Parms), &Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
{
	((SystemTest_eventProutText_Parms*)Obj)->bPrintToLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SystemTest_eventProutText_Parms), &Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SystemTest_eventProutText_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SystemTest_eventProutText_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SystemTest_eventProutText_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USystemTest_ProutText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_bPrintToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_bPrintToLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USystemTest_ProutText_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USystemTest_ProutText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USystemTest_ProutText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USystemTest, nullptr, "ProutText", Z_Construct_UFunction_USystemTest_ProutText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USystemTest_ProutText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USystemTest_ProutText_Statics::SystemTest_eventProutText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USystemTest_ProutText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USystemTest_ProutText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USystemTest_ProutText_Statics::SystemTest_eventProutText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USystemTest_ProutText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USystemTest_ProutText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USystemTest::execProutText)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_bPrintToScreen);
	P_GET_UBOOL(Z_Param_bPrintToLog);
	P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	USystemTest::ProutText(Z_Param_WorldContextObject,Z_Param_bPrintToScreen,Z_Param_bPrintToLog,Z_Param_TextColor,Z_Param_Duration,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class USystemTest Function ProutText *********************************************

// ********** Begin Class USystemTest **************************************************************
void USystemTest::StaticRegisterNativesUSystemTest()
{
	UClass* Class = USystemTest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProutText", &USystemTest::execProutText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USystemTest;
UClass* USystemTest::GetPrivateStaticClass()
{
	using TClass = USystemTest;
	if (!Z_Registration_Info_UClass_USystemTest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SystemTest"),
			Z_Registration_Info_UClass_USystemTest.InnerSingleton,
			StaticRegisterNativesUSystemTest,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USystemTest.InnerSingleton;
}
UClass* Z_Construct_UClass_USystemTest_NoRegister()
{
	return USystemTest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USystemTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SystemTest.h" },
		{ "ModuleRelativePath", "Public/SystemTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USystemTest_ProutText, "ProutText" }, // 245698972
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USystemTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UKismetSystemLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USystemTest_Statics::ClassParams = {
	&USystemTest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USystemTest_Statics::Class_MetaDataParams), Z_Construct_UClass_USystemTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USystemTest()
{
	if (!Z_Registration_Info_UClass_USystemTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USystemTest.OuterSingleton, Z_Construct_UClass_USystemTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USystemTest.OuterSingleton;
}
USystemTest::USystemTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USystemTest);
USystemTest::~USystemTest() {}
// ********** End Class USystemTest ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h__Script_FirstPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USystemTest, USystemTest::StaticClass, TEXT("USystemTest"), &Z_Registration_Info_UClass_USystemTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USystemTest), 3629081152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h__Script_FirstPlugin_3281977807(TEXT("/Script/FirstPlugin"),
	Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h__Script_FirstPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Source_FirstPlugin_Public_SystemTest_h__Script_FirstPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

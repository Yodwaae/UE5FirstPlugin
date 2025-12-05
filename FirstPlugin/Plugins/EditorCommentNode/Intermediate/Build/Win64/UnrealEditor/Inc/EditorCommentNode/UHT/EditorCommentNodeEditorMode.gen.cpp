// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorCommentNodeEditorMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEditorCommentNodeEditorMode() {}

// ********** Begin Cross Module References ********************************************************
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeEditorMode();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeEditorMode_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UEdMode();
UPackage* Z_Construct_UPackage__Script_EditorCommentNode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEditorCommentNodeEditorMode *********************************************
void UEditorCommentNodeEditorMode::StaticRegisterNativesUEditorCommentNodeEditorMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorCommentNodeEditorMode;
UClass* UEditorCommentNodeEditorMode::GetPrivateStaticClass()
{
	using TClass = UEditorCommentNodeEditorMode;
	if (!Z_Registration_Info_UClass_UEditorCommentNodeEditorMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EditorCommentNodeEditorMode"),
			Z_Registration_Info_UClass_UEditorCommentNodeEditorMode.InnerSingleton,
			StaticRegisterNativesUEditorCommentNodeEditorMode,
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
	return Z_Registration_Info_UClass_UEditorCommentNodeEditorMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorCommentNodeEditorMode_NoRegister()
{
	return UEditorCommentNodeEditorMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorCommentNodeEditorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
#endif
		{ "IncludePath", "EditorCommentNodeEditorMode.h" },
		{ "ModuleRelativePath", "Public/EditorCommentNodeEditorMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorCommentNodeEditorMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditorCommentNodeEditorMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdMode,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorCommentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeEditorMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorCommentNodeEditorMode_Statics::ClassParams = {
	&UEditorCommentNodeEditorMode::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeEditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorCommentNodeEditorMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorCommentNodeEditorMode()
{
	if (!Z_Registration_Info_UClass_UEditorCommentNodeEditorMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorCommentNodeEditorMode.OuterSingleton, Z_Construct_UClass_UEditorCommentNodeEditorMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorCommentNodeEditorMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorCommentNodeEditorMode);
// ********** End Class UEditorCommentNodeEditorMode ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_EditorCommentNodeEditorMode_h__Script_EditorCommentNode_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorCommentNodeEditorMode, UEditorCommentNodeEditorMode::StaticClass, TEXT("UEditorCommentNodeEditorMode"), &Z_Registration_Info_UClass_UEditorCommentNodeEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorCommentNodeEditorMode), 1029399780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_EditorCommentNodeEditorMode_h__Script_EditorCommentNode_340062501(TEXT("/Script/EditorCommentNode"),
	Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_EditorCommentNodeEditorMode_h__Script_EditorCommentNode_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_EditorCommentNodeEditorMode_h__Script_EditorCommentNode_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

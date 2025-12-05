// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/EditorCommentNodeSimpleTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEditorCommentNodeSimpleTool() {}

// ********** Begin Cross Module References ********************************************************
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeSimpleTool();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeSimpleTool_NoRegister();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder_NoRegister();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
UPackage* Z_Construct_UPackage__Script_EditorCommentNode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEditorCommentNodeSimpleToolBuilder **************************************
void UEditorCommentNodeSimpleToolBuilder::StaticRegisterNativesUEditorCommentNodeSimpleToolBuilder()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolBuilder;
UClass* UEditorCommentNodeSimpleToolBuilder::GetPrivateStaticClass()
{
	using TClass = UEditorCommentNodeSimpleToolBuilder;
	if (!Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolBuilder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EditorCommentNodeSimpleToolBuilder"),
			Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolBuilder.InnerSingleton,
			StaticRegisterNativesUEditorCommentNodeSimpleToolBuilder,
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
	return Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolBuilder.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder_NoRegister()
{
	return UEditorCommentNodeSimpleToolBuilder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for UEditorCommentNodeSimpleTool\n */" },
#endif
		{ "IncludePath", "Tools/EditorCommentNodeSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for UEditorCommentNodeSimpleTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorCommentNodeSimpleToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorCommentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder_Statics::ClassParams = {
	&UEditorCommentNodeSimpleToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder()
{
	if (!Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolBuilder.OuterSingleton;
}
UEditorCommentNodeSimpleToolBuilder::UEditorCommentNodeSimpleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorCommentNodeSimpleToolBuilder);
UEditorCommentNodeSimpleToolBuilder::~UEditorCommentNodeSimpleToolBuilder() {}
// ********** End Class UEditorCommentNodeSimpleToolBuilder ****************************************

// ********** Begin Class UEditorCommentNodeSimpleToolProperties ***********************************
void UEditorCommentNodeSimpleToolProperties::StaticRegisterNativesUEditorCommentNodeSimpleToolProperties()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolProperties;
UClass* UEditorCommentNodeSimpleToolProperties::GetPrivateStaticClass()
{
	using TClass = UEditorCommentNodeSimpleToolProperties;
	if (!Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolProperties.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EditorCommentNodeSimpleToolProperties"),
			Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolProperties.InnerSingleton,
			StaticRegisterNativesUEditorCommentNodeSimpleToolProperties,
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
	return Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolProperties.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_NoRegister()
{
	return UEditorCommentNodeSimpleToolProperties::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings UObject for UEditorCommentNodeSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
#endif
		{ "IncludePath", "Tools/EditorCommentNodeSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings UObject for UEditorCommentNodeSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
#endif
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorCommentNodeSimpleToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
{
	((UEditorCommentNodeSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEditorCommentNodeSimpleToolProperties), &Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowExtendedInfo_MetaData), NewProp_ShowExtendedInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorCommentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::ClassParams = {
	&UEditorCommentNodeSimpleToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties()
{
	if (!Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolProperties.OuterSingleton, Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolProperties.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorCommentNodeSimpleToolProperties);
UEditorCommentNodeSimpleToolProperties::~UEditorCommentNodeSimpleToolProperties() {}
// ********** End Class UEditorCommentNodeSimpleToolProperties *************************************

// ********** Begin Class UEditorCommentNodeSimpleTool *********************************************
void UEditorCommentNodeSimpleTool::StaticRegisterNativesUEditorCommentNodeSimpleTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorCommentNodeSimpleTool;
UClass* UEditorCommentNodeSimpleTool::GetPrivateStaticClass()
{
	using TClass = UEditorCommentNodeSimpleTool;
	if (!Z_Registration_Info_UClass_UEditorCommentNodeSimpleTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EditorCommentNodeSimpleTool"),
			Z_Registration_Info_UClass_UEditorCommentNodeSimpleTool.InnerSingleton,
			StaticRegisterNativesUEditorCommentNodeSimpleTool,
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
	return Z_Registration_Info_UClass_UEditorCommentNodeSimpleTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorCommentNodeSimpleTool_NoRegister()
{
	return UEditorCommentNodeSimpleTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UEditorCommentNodeSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
#endif
		{ "IncludePath", "Tools/EditorCommentNodeSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UEditorCommentNodeSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeSimpleTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorCommentNodeSimpleTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorCommentNodeSimpleTool, Properties), Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleClickTool,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorCommentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::ClassParams = {
	&UEditorCommentNodeSimpleTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorCommentNodeSimpleTool()
{
	if (!Z_Registration_Info_UClass_UEditorCommentNodeSimpleTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorCommentNodeSimpleTool.OuterSingleton, Z_Construct_UClass_UEditorCommentNodeSimpleTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorCommentNodeSimpleTool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorCommentNodeSimpleTool);
UEditorCommentNodeSimpleTool::~UEditorCommentNodeSimpleTool() {}
// ********** End Class UEditorCommentNodeSimpleTool ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Private_Tools_EditorCommentNodeSimpleTool_h__Script_EditorCommentNode_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorCommentNodeSimpleToolBuilder, UEditorCommentNodeSimpleToolBuilder::StaticClass, TEXT("UEditorCommentNodeSimpleToolBuilder"), &Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorCommentNodeSimpleToolBuilder), 1070291271U) },
		{ Z_Construct_UClass_UEditorCommentNodeSimpleToolProperties, UEditorCommentNodeSimpleToolProperties::StaticClass, TEXT("UEditorCommentNodeSimpleToolProperties"), &Z_Registration_Info_UClass_UEditorCommentNodeSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorCommentNodeSimpleToolProperties), 4132581602U) },
		{ Z_Construct_UClass_UEditorCommentNodeSimpleTool, UEditorCommentNodeSimpleTool::StaticClass, TEXT("UEditorCommentNodeSimpleTool"), &Z_Registration_Info_UClass_UEditorCommentNodeSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorCommentNodeSimpleTool), 984224146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Private_Tools_EditorCommentNodeSimpleTool_h__Script_EditorCommentNode_4030053381(TEXT("/Script/EditorCommentNode"),
	Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Private_Tools_EditorCommentNodeSimpleTool_h__Script_EditorCommentNode_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Private_Tools_EditorCommentNodeSimpleTool_h__Script_EditorCommentNode_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

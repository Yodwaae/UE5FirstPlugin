// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/EditorCommentNodeInteractiveTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEditorCommentNodeInteractiveTool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveTool();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveTool_NoRegister();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder_NoRegister();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
UPackage* Z_Construct_UPackage__Script_EditorCommentNode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEditorCommentNodeInteractiveToolBuilder *********************************
void UEditorCommentNodeInteractiveToolBuilder::StaticRegisterNativesUEditorCommentNodeInteractiveToolBuilder()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolBuilder;
UClass* UEditorCommentNodeInteractiveToolBuilder::GetPrivateStaticClass()
{
	using TClass = UEditorCommentNodeInteractiveToolBuilder;
	if (!Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolBuilder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EditorCommentNodeInteractiveToolBuilder"),
			Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolBuilder.InnerSingleton,
			StaticRegisterNativesUEditorCommentNodeInteractiveToolBuilder,
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
	return Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolBuilder.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder_NoRegister()
{
	return UEditorCommentNodeInteractiveToolBuilder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for UEditorCommentNodeInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/EditorCommentNodeInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for UEditorCommentNodeInteractiveTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorCommentNodeInteractiveToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorCommentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder_Statics::ClassParams = {
	&UEditorCommentNodeInteractiveToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder()
{
	if (!Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolBuilder.OuterSingleton;
}
UEditorCommentNodeInteractiveToolBuilder::UEditorCommentNodeInteractiveToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorCommentNodeInteractiveToolBuilder);
UEditorCommentNodeInteractiveToolBuilder::~UEditorCommentNodeInteractiveToolBuilder() {}
// ********** End Class UEditorCommentNodeInteractiveToolBuilder ***********************************

// ********** Begin Class UEditorCommentNodeInteractiveToolProperties ******************************
void UEditorCommentNodeInteractiveToolProperties::StaticRegisterNativesUEditorCommentNodeInteractiveToolProperties()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolProperties;
UClass* UEditorCommentNodeInteractiveToolProperties::GetPrivateStaticClass()
{
	using TClass = UEditorCommentNodeInteractiveToolProperties;
	if (!Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolProperties.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EditorCommentNodeInteractiveToolProperties"),
			Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolProperties.InnerSingleton,
			StaticRegisterNativesUEditorCommentNodeInteractiveToolProperties,
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
	return Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolProperties.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_NoRegister()
{
	return UEditorCommentNodeInteractiveToolProperties::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Property set for the UEditorCommentNodeInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/EditorCommentNodeInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property set for the UEditorCommentNodeInteractiveTool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Second point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Second point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current distance measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current distance measurement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorCommentNodeInteractiveToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorCommentNodeInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorCommentNodeInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorCommentNodeInteractiveToolProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorCommentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::ClassParams = {
	&UEditorCommentNodeInteractiveToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties()
{
	if (!Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolProperties.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorCommentNodeInteractiveToolProperties);
UEditorCommentNodeInteractiveToolProperties::~UEditorCommentNodeInteractiveToolProperties() {}
// ********** End Class UEditorCommentNodeInteractiveToolProperties ********************************

// ********** Begin Class UEditorCommentNodeInteractiveTool ****************************************
void UEditorCommentNodeInteractiveTool::StaticRegisterNativesUEditorCommentNodeInteractiveTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEditorCommentNodeInteractiveTool;
UClass* UEditorCommentNodeInteractiveTool::GetPrivateStaticClass()
{
	using TClass = UEditorCommentNodeInteractiveTool;
	if (!Z_Registration_Info_UClass_UEditorCommentNodeInteractiveTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EditorCommentNodeInteractiveTool"),
			Z_Registration_Info_UClass_UEditorCommentNodeInteractiveTool.InnerSingleton,
			StaticRegisterNativesUEditorCommentNodeInteractiveTool,
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
	return Z_Registration_Info_UClass_UEditorCommentNodeInteractiveTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveTool_NoRegister()
{
	return UEditorCommentNodeInteractiveTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UEditorCommentNodeInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
#endif
		{ "IncludePath", "Tools/EditorCommentNodeInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UEditorCommentNodeInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Properties of the tool are stored here */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/EditorCommentNodeInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties of the tool are stored here" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorCommentNodeInteractiveTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditorCommentNodeInteractiveTool, Properties), Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorCommentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::ClassParams = {
	&UEditorCommentNodeInteractiveTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditorCommentNodeInteractiveTool()
{
	if (!Z_Registration_Info_UClass_UEditorCommentNodeInteractiveTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorCommentNodeInteractiveTool.OuterSingleton, Z_Construct_UClass_UEditorCommentNodeInteractiveTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditorCommentNodeInteractiveTool.OuterSingleton;
}
UEditorCommentNodeInteractiveTool::UEditorCommentNodeInteractiveTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorCommentNodeInteractiveTool);
UEditorCommentNodeInteractiveTool::~UEditorCommentNodeInteractiveTool() {}
// ********** End Class UEditorCommentNodeInteractiveTool ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Private_Tools_EditorCommentNodeInteractiveTool_h__Script_EditorCommentNode_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditorCommentNodeInteractiveToolBuilder, UEditorCommentNodeInteractiveToolBuilder::StaticClass, TEXT("UEditorCommentNodeInteractiveToolBuilder"), &Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorCommentNodeInteractiveToolBuilder), 4122109887U) },
		{ Z_Construct_UClass_UEditorCommentNodeInteractiveToolProperties, UEditorCommentNodeInteractiveToolProperties::StaticClass, TEXT("UEditorCommentNodeInteractiveToolProperties"), &Z_Registration_Info_UClass_UEditorCommentNodeInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorCommentNodeInteractiveToolProperties), 333169217U) },
		{ Z_Construct_UClass_UEditorCommentNodeInteractiveTool, UEditorCommentNodeInteractiveTool::StaticClass, TEXT("UEditorCommentNodeInteractiveTool"), &Z_Registration_Info_UClass_UEditorCommentNodeInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorCommentNodeInteractiveTool), 3454939387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Private_Tools_EditorCommentNodeInteractiveTool_h__Script_EditorCommentNode_149352959(TEXT("/Script/EditorCommentNode"),
	Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Private_Tools_EditorCommentNodeInteractiveTool_h__Script_EditorCommentNode_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Private_Tools_EditorCommentNodeInteractiveTool_h__Script_EditorCommentNode_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

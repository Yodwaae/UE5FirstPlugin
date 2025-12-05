// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommentNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCommentNode() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UCommentNode();
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UCommentNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_EditorCommentNode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCommentNode *************************************************************
void UCommentNode::StaticRegisterNativesUCommentNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCommentNode;
UClass* UCommentNode::GetPrivateStaticClass()
{
	using TClass = UCommentNode;
	if (!Z_Registration_Info_UClass_UCommentNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CommentNode"),
			Z_Registration_Info_UClass_UCommentNode.InnerSingleton,
			StaticRegisterNativesUCommentNode,
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
	return Z_Registration_Info_UClass_UCommentNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UCommentNode_NoRegister()
{
	return UCommentNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCommentNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommentNode.h" },
		{ "ModuleRelativePath", "Public/CommentNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommentNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCommentNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_EditorCommentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommentNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommentNode_Statics::ClassParams = {
	&UCommentNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommentNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommentNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommentNode()
{
	if (!Z_Registration_Info_UClass_UCommentNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommentNode.OuterSingleton, Z_Construct_UClass_UCommentNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommentNode.OuterSingleton;
}
UCommentNode::UCommentNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommentNode);
UCommentNode::~UCommentNode() {}
// ********** End Class UCommentNode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h__Script_EditorCommentNode_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommentNode, UCommentNode::StaticClass, TEXT("UCommentNode"), &Z_Registration_Info_UClass_UCommentNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommentNode), 2815410550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h__Script_EditorCommentNode_2688942271(TEXT("/Script/EditorCommentNode"),
	Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h__Script_EditorCommentNode_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h__Script_EditorCommentNode_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

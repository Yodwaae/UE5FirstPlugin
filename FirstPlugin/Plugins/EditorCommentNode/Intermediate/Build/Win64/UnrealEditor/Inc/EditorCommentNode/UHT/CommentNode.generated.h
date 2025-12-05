// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommentNode.h"

#ifdef EDITORCOMMENTNODE_CommentNode_generated_h
#error "CommentNode.generated.h already included, missing '#pragma once' in CommentNode.h"
#endif
#define EDITORCOMMENTNODE_CommentNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommentNode *************************************************************
EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UCommentNode_NoRegister();

#define FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommentNode(); \
	friend struct Z_Construct_UClass_UCommentNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORCOMMENTNODE_API UClass* Z_Construct_UClass_UCommentNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommentNode, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorCommentNode"), Z_Construct_UClass_UCommentNode_NoRegister) \
	DECLARE_SERIALIZER(UCommentNode)


#define FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommentNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommentNode(UCommentNode&&) = delete; \
	UCommentNode(const UCommentNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommentNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommentNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommentNode) \
	NO_API virtual ~UCommentNode();


#define FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h_12_PROLOG
#define FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommentNode;

// ********** End Class UCommentNode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lspitzdrev_UE5FirstPlugin_FirstPlugin_Plugins_EditorCommentNode_Source_EditorCommentNode_Public_CommentNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

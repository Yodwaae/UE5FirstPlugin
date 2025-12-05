// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorCommentNodeModule.h"
#include "EditorCommentNodeEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "EditorCommentNodeModule"

void FEditorCommentNodeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FEditorCommentNodeEditorModeCommands::Register();
}

void FEditorCommentNodeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FEditorCommentNodeEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEditorCommentNodeModule, EditorCommentNode)
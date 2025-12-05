// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorCommentNodeEditorModeToolkit.h"
#include "EditorCommentNodeEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "EditorCommentNodeEditorModeToolkit"

FEditorCommentNodeEditorModeToolkit::FEditorCommentNodeEditorModeToolkit()
{
}

void FEditorCommentNodeEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FEditorCommentNodeEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FEditorCommentNodeEditorModeToolkit::GetToolkitFName() const
{
	return FName("EditorCommentNodeEditorMode");
}

FText FEditorCommentNodeEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "EditorCommentNodeEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE

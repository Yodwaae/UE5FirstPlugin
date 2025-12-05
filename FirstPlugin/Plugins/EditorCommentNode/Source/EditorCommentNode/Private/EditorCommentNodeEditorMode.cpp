// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorCommentNodeEditorMode.h"
#include "EditorCommentNodeEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "EditorCommentNodeEditorModeCommands.h"
#include "Modules/ModuleManager.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/EditorCommentNodeSimpleTool.h"
#include "Tools/EditorCommentNodeInteractiveTool.h"

// step 2: register a ToolBuilder in FEditorCommentNodeEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "EditorCommentNodeEditorMode"

const FEditorModeID UEditorCommentNodeEditorMode::EM_EditorCommentNodeEditorModeId = TEXT("EM_EditorCommentNodeEditorMode");

FString UEditorCommentNodeEditorMode::SimpleToolName = TEXT("EditorCommentNode_ActorInfoTool");
FString UEditorCommentNodeEditorMode::InteractiveToolName = TEXT("EditorCommentNode_MeasureDistanceTool");


UEditorCommentNodeEditorMode::UEditorCommentNodeEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(UEditorCommentNodeEditorMode::EM_EditorCommentNodeEditorModeId,
		LOCTEXT("ModeName", "EditorCommentNode"),
		FSlateIcon(),
		true);
}


UEditorCommentNodeEditorMode::~UEditorCommentNodeEditorMode()
{
}


void UEditorCommentNodeEditorMode::ActorSelectionChangeNotify()
{
}

void UEditorCommentNodeEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FEditorCommentNodeEditorModeCommands& SampleToolCommands = FEditorCommentNodeEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<UEditorCommentNodeSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<UEditorCommentNodeInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void UEditorCommentNodeEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FEditorCommentNodeEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UEditorCommentNodeEditorMode::GetModeCommands() const
{
	return FEditorCommentNodeEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE

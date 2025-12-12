// Fill out your copyright notice in the Description page of Project Settings.


#include "CommentNode.h"
#include "BlueprintNodeSpawner.h"
#include "BlueprintActionDatabaseRegistrar.h"

void UCommentNode::AllocateDefaultPins() { Super::AllocateDefaultPins(); }

void UCommentNode::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();

	if (ActionRegistrar.IsOpenForRegistration(ActionKey)) {
		UBlueprintNodeSpawner* Spawner = UBlueprintNodeSpawner::Create(GetClass());

		// I can customize the spawner here before registering it
		//Spawner->CustomizeNodeDelegate = UBlueprintNodeSpawner::FCustomizeNodeDelegate::CreateStatic(/*Customization function call here */);
		
		ActionRegistrar.AddBlueprintAction(ActionKey, Spawner);
	}
}

FText UCommentNode::GetNodeTitle(ENodeTitleType::Type TitleType) const { return FText::FromString("Prout Comment"); }

FText UCommentNode::GetMenuCategory() const { return FText::FromString("Super Utilities"); }

bool UCommentNode::IsNodePure() const { return true; }

bool UCommentNode::ShouldShowNodeProperties() const { return true; }



// Fill out your copyright notice in the Description page of Project Settings.


#include "CommentNode.h"

void UCommentNode::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();
}

FText UCommentNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return Super::GetNodeTitle(TitleType);
}

void UCommentNode::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar)
{
	//Super::GetMenuActions(ActionRegistrar);
}

FText UCommentNode::GetMenuCategory() const
{
	return Super::GetMenuCategory();
}
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "CommentNode.generated.h"

/**
 * 
 */
UCLASS()
class EDITORCOMMENTNODE_API UCommentNode : public UK2Node
{
	GENERATED_BODY()

public:
	
	virtual bool IsNodePure() const override;
	virtual bool ShouldShowNodeProperties() const override;

	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual FText GetMenuCategory() const override;
};

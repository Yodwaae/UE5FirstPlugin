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
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	static void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar);
	virtual FText GetMenuCategory() const override;
};

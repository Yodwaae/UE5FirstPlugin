// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EditorCommentNode : ModuleRules
{
    public EditorCommentNode(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[]
            {
            }
        );

        PrivateIncludePaths.AddRange(
            new string[]
            {
            }
        );

        // Core must be PUBLIC so static symbols (like TIntVector3::ZeroValue) link correctly
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",

                // Blueprint + K2 node dependencies
                "Kismet",
                "BlueprintGraph",
                "KismetCompiler",

                // Editor-only graph schema and utilities
                "UnrealEd",
                "EditorSubsystem",

                // Extra editor tools
                "InputCore",
                "EditorFramework",
                "EditorStyle",
                "LevelEditor",
                "InteractiveToolsFramework",
                "EditorInteractiveToolsFramework"
            }
        );

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
            }
        );
    }
}

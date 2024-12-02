// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Palworld_UITest : ModuleRules
{
	public Palworld_UITest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

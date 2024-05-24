// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PirateGachaGame : ModuleRules
{
	public PirateGachaGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

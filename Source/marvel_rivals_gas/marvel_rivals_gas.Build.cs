// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class marvel_rivals_gas : ModuleRules
{
	public marvel_rivals_gas(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

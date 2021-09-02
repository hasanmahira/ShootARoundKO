// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShootARound : ModuleRules
{
	public ShootARound(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

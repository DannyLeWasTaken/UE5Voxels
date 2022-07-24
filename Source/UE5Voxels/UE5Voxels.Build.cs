// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5Voxels : ModuleRules
{
	public UE5Voxels(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
		
		PrivateDependencyModuleNames.AddRange(new string[] { "ProceduralMeshComponent" });
	}
}

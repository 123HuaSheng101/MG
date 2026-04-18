//版权所有Epic Games, Inc。保留所有权利。

using UnrealBuildTool;

public class MGServerTarget : TargetRules
{
	public MGServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		ExtraModuleNames.Add("MG");
	}
}
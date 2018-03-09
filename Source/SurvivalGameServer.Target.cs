//Copyright 1998 - 2018 MAG Studios Canada, Inc.All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SurvivalGameServerTarget : TargetRules
{
	public SurvivalGameServerTarget(TargetInfo Target) : base(Target)
    {
		Type = TargetType.Server;
        ExtraModuleNames.AddRange(new string[] { "SurvivalGame"});
    }

    //
    // TargetRules interface.
    //
    //  UE4.16 Changes
    //	public override void SetupBinaries(
    //		TargetInfo Target,
    //		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
    //		ref List<string> OutExtraModuleNames
    //		)
    //	{
    //		OutExtraModuleNames.AddRange( new string[] { "SurvivalGame","MenuModule" } );
    //	}
}

//Copyright 1998 - 2018 MAG Studios Canada, Inc.All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SurvivalGameEditorTarget : TargetRules
{
	public SurvivalGameEditorTarget(TargetInfo Target) : base(Target)
    {
		Type = TargetType.Editor;
        ExtraModuleNames.AddRange(new string[] { "SurvivalGame" });
/*
        if (UEBuildConfiguration.bBuildEditor)
        {
            ExtraModuleNames.Add("MenuModule");
        } */
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

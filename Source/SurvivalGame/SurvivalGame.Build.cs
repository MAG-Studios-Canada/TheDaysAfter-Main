//Copyright 1998 - 2018 MAG Studios Canada, Inc.All Rights Reserved.

using UnrealBuildTool;

public class SurvivalGame : ModuleRules
{
	public SurvivalGame(ReadOnlyTargetRules Target) : base(Target)
    {

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // The path for the header files
        PublicIncludePaths.AddRange(new string[] { "SurvivalGame/Public"});

        // The path for the source files
        PrivateIncludePaths.AddRange(new string[] { "SurvivalGame/Private",});

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "AdvancedSessions",
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "HeadMountedDisplay",
            "InputCore",
            
            "MoviePlayer",
            "Networking",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "OnlineSubsystemSteam",
            "OnlineSubsystemNull",
            "PhysXVehicles",
            "Sockets",
            "GameplayTasks" });

        PrivateDependencyModuleNames.AddRange(new string[] 
        {
            "AdvancedSessions",
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "HeadMountedDisplay",
            "InputCore",
            
            "MoviePlayer",
            "Networking",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "OnlineSubsystemSteam",
            "OnlineSubsystemNull",
            "PhysXVehicles",
            "Sockets",
            "GameplayTasks" });

        Definitions.Add("HMD_MODULE_INCLUDED=1");
       
    }
    /*   
    //  TargetRules interface. Appears depreciated
    
       	public override void SetupBinaries(
    		TargetInfo Target,
    		 List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
    		ref List<string> OutExtraModuleNames
    		)
    	{
    		OutExtraModuleNames.AddRange( new string[] 
            {
                "SurvivalGame",
                "MenuModule" } );
    	}
        */
}

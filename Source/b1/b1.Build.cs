using UnrealBuildTool;

public class b1 : ModuleRules {
    public b1(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AsyncLoadingScreen",
            "Calliope",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GSInput",
            "GameplayCameras",
            "GameplayTags",
            "GeometryCollectionEngine",
            "Landscape",
            "LevelSequence",
            "MovieScene",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "OnlineSubsystemUtils",
            "Paper2D",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "ReplicationGraph",
            "SlateCore",
            "TressFX",
            "UnrealExtent",
        });
    }
}

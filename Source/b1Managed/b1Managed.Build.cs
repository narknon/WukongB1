using UnrealBuildTool;

public class b1Managed : ModuleRules {
    public b1Managed(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AsyncLoadingScreen",
            "Calliope",
            "CalliopeWin64",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CustomLightSystem",
            "DeveloperSettings",
            "DonAINavigation",
            "Engine",
            "EnhancedInput",
            "GSAnimationKeyBlender",
            "GSDynamicSDF",
            "GSEProtobufDB",
            "GSEngineExtent",
            "GSInput",
            "GSNiagara",
            "GSReplaySystem",
            "GameplayCameras",
            "GameplayTags",
            "HoudiniEngineRuntime",
            "IKRig",
            "InputCore",
            "JavascriptUMG",
            "Landscape",
            "LevelSequence",
            "MM",
            "MediaAssets",
            "MovieRenderPipelineCore",
            "Niagara",
            "ReplicationGraph",
            "Slate",
            "SlateCore",
            "UMG",
            "UMGSpline",
            "UnrealExtent",
            "b1",
        });
    }
}

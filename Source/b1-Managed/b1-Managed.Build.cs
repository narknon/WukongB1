using UnrealBuildTool;

public class b1-Managed : ModuleRules {
    public b1-Managed(ReadOnlyTargetRules Target) : base(Target) {
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
            "GSE-ProtobufDB",
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

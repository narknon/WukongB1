using UnrealBuildTool;

public class UnrealExtent : ModuleRules {
    public UnrealExtent(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "ApexDestruction",
            "AudioSynesthesia",
            "BinkMediaPlayer",
            "Core",
            "CoreUObject",
            "Engine",
            "Foliage",
            "GSAnimationKeyBlender",
            "InputCore",
            "Landscape",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "PCG",
            "PhysicsCore",
            "Slate",
            "SlateCore",
            "UMG",
            "Water",
        });
    }
}

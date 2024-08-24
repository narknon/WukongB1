using UnrealBuildTool;

public class GSAnimationKeyBlender : ModuleRules {
    public GSAnimationKeyBlender(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "LevelSequence",
            "MovieScene",
            "SlateCore",
            "UMG",
        });
    }
}

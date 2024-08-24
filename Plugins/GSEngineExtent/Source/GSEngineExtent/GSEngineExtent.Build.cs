using UnrealBuildTool;

public class GSEngineExtent : ModuleRules {
    public GSEngineExtent(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "ApexDestruction",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}

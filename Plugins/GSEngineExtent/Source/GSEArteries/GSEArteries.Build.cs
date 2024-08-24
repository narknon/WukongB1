using UnrealBuildTool;

public class GSEArteries : ModuleRules {
    public GSEArteries(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Arteries",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}

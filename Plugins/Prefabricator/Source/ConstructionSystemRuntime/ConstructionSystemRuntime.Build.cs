using UnrealBuildTool;

public class ConstructionSystemRuntime : ModuleRules {
    public ConstructionSystemRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "PrefabricatorRuntime",
            "UMG",
        });
    }
}

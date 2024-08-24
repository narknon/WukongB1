using UnrealBuildTool;

public class b1GameTarget : TargetRules {
	public b1GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"b1",
			"DownloadTookit",
			"FFXFSR3Settings",
			"GSDataShare",
			"GSFileHelper",
			"UnrealExtent",
		});
	}
}

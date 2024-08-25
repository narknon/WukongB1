using UnrealBuildTool;

public class b1Target : TargetRules {
	public b1Target(TargetInfo Target) : base(Target) {
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

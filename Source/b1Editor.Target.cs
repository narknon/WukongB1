using UnrealBuildTool;

public class b1EditorTarget : TargetRules {
	public b1EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
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

using UnrealBuildTool;

public class b1EditorTarget : TargetRules {
	public b1EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			".idea",
			"b1",
			"b1-Managed",
			"DownloadTookit",
			"FFXFSR3Settings",
			"GSDataShare",
			"GSE-ProtobufDB",
			"GSFileHelper",
			"Protobuf-RunTime",
			"UnrealExtent",
		});
	}
}

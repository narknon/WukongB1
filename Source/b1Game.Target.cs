using UnrealBuildTool;

public class b1GameTarget : TargetRules {
	public b1GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
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

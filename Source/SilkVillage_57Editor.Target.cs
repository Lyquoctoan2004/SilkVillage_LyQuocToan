using UnrealBuildTool;
public class SilkVillage_57EditorTarget : TargetRules {
 public SilkVillage_57EditorTarget(TargetInfo Target) : base(Target) { Type=TargetType.Editor; DefaultBuildSettings=BuildSettingsVersion.V6; IncludeOrderVersion=EngineIncludeOrderVersion.Unreal5_7; ExtraModuleNames.AddRange(new string[]{"SilkVillageSystems","SilkVillageEditor"}); }
}

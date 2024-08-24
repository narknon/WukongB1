#include "BGUFunclibEditorUtility.h"

UBGUFunclibEditorUtility::UBGUFunclibEditorUtility() {
}

void UBGUFunclibEditorUtility::PrintStringsToCSV(TArray<FString> Infos, const FString& CSVPath) {
}

TArray<int32> UBGUFunclibEditorUtility::GetSkillIDByAMPath(const FString& AMPath) {
    return TArray<int32>();
}

FString UBGUFunclibEditorUtility::GetAMPathBySkillID(int32 SkillID) {
    return TEXT("");
}

void UBGUFunclibEditorUtility::SwitchDebugWidgetState(AActor* Actor) {
}

TArray<AActor*> UBGUFunclibEditorUtility::GetAllSkeletalActorInLevel(ULevel* Level) {
    return TArray<AActor*>();
}

bool UBGUFunclibEditorUtility::CheckIsActorInactiveManaged(AActor* Actor) {
    return false;
}

void UBGUFunclibEditorUtility::PrintSkeletalMeshPerfInfoCSV(TArray<FLevelSkeletalMeshCheckInfoHelper> LevelSkeletalMeshInfo, const FString& CSVPath) {
}

void UBGUFunclibEditorUtility::SetupSkeletalActorInactiveInfo(AActor* InActor) {
}

TArray<FLevelSkeletalMeshCheckInfoHelper> UBGUFunclibEditorUtility::GetAllSkeletalActorWithoutPerfFromSelected(TArray<FString> SelectedLevels) {
    return TArray<FLevelSkeletalMeshCheckInfoHelper>();
}



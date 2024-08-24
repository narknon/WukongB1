#include "BGWFunctionLibrary.h"

UBGWFunctionLibrary::UBGWFunctionLibrary() {
}

void UBGWFunctionLibrary::RetargetLevelStreamingLevelNames(UObject* WorldContext, const FString& sourceNames, const FString& destNames, const FString& levelPrefix) {
}

void UBGWFunctionLibrary::ResumeBGWVolumeLevelStreaming(UObject* WorldContextObject) {
}

void UBGWFunctionLibrary::PauseBGWVolumeLevelStreaming(UObject* WorldContextObject) {
}

void UBGWFunctionLibrary::MaintainVolumesContainYuanjing(TArray<ABGWLevelStreamingVolume*> InStreamingVolumes) {
}

bool UBGWFunctionLibrary::IsDistanceStreamingValid(UObject* WorldContextObject) {
    return false;
}

FString UBGWFunctionLibrary::GetLevelStreamingAssetName(ULevelStreaming* LevelStreaming) {
    return TEXT("");
}

UBGW_EventCollection* UBGWFunctionLibrary::GetBGWEvents(UObject* WorldContextObject) {
    return NULL;
}

void UBGWFunctionLibrary::BGWSetIsCameraMoveableWhenPaused(const UObject* WorldContextObject, bool IsCameraMoveable) {
}

void UBGWFunctionLibrary::BGWSetGamePaused(const UObject* WorldContextObject, bool bPaused) {
}

void UBGWFunctionLibrary::BGWSetAllLevelStreamingVolumeEnabled(UObject* WorldContextObject, bool bEnabled) {
}

void UBGWFunctionLibrary::BGWRequestAsyncLoad(UObject* WorldContextObject, TArray<FSoftObjectPath> LoadList, FBUE_GrantItemsDeferred_CS CallBackDelegate) {
}

void UBGWFunctionLibrary::BGWRemoveLevelFromWhiteList(UObject* WorldContextObject, const FName& InLevelName) {
}

void UBGWFunctionLibrary::BGWRemoveLevelFromBlackList(UObject* WorldContextObject, const FName& InLevelName) {
}

void UBGWFunctionLibrary::BGWProcessLevelStreamingVolumes(UObject* WorldContextObject, FVector OverrideViewLocation, bool bUseOverrideViewLocation) {
}

void UBGWFunctionLibrary::BGWGetStatusChangedStreamingLevels(UObject* WorldContextObject, TMap<ULevelStreaming*, FGSStreamingLevelLoadSetting>& OutStreamingLevels) {
}

bool UBGWFunctionLibrary::BGWGetIsCameraMoveableWhenPaused(const UObject* WorldContextObject) {
    return false;
}

TArray<FString> UBGWFunctionLibrary::BGWGetAlwaysCookPathList() {
    return TArray<FString>();
}

TArray<ULevelStreaming*> UBGWFunctionLibrary::BGWGetAllStreamingLevels(UObject* WorldContextObject) {
    return TArray<ULevelStreaming*>();
}

UWorld* UBGWFunctionLibrary::BGWFindWorldInPackage(UPackage* Package) {
    return NULL;
}

void UBGWFunctionLibrary::BGWAddLevelToWhiteList(UObject* WorldContextObject, const FName& InLevelName, const EBGWStreamingVolumeUsage& InUsage) {
}

void UBGWFunctionLibrary::BGWAddLevelToBlackList(UObject* WorldContextObject, const FName& InLevelName) {
}



#include "BGUWCStreamingFuncLib.h"

UBGUWCStreamingFuncLib::UBGUWCStreamingFuncLib() {
}

void UBGUWCStreamingFuncLib::UpdateStreamingState(UObject* WorldContext, bool bBlockTillComplete) {
}

void UBGUWCStreamingFuncLib::UnregisterFromStreamingSource(AActor* InActor) {
}

void UBGUWCStreamingFuncLib::SpawnStreamingSource(UObject* WorldContext, FVector SpawnLocation) {
}

void UBGUWCStreamingFuncLib::SetStreamingManagerViewSource(FVector ViewLocation, float Duration) {
}

TArray<FGSSetLevelStateFailedInfo> UBGUWCStreamingFuncLib::SetLevelsStateByNames(UObject* InWorldContext, const TArray<FString>& InTargetLevelNames, EGSLevelState InTargetState, int32 InOperationID, bool bBlockOnLoad) {
    return TArray<FGSSetLevelStateFailedInfo>();
}

TArray<FGSSetLevelStateFailedInfo> UBGUWCStreamingFuncLib::SetLevelsState(UObject* InWorldContext, const FString& InTargetLevelNameOrKeyword, EGSLevelState InTargetState, int32 InOperationID, bool bKeywordMatch, bool bBlockOnLoad) {
    return TArray<FGSSetLevelStateFailedInfo>();
}

void UBGUWCStreamingFuncLib::RegisterAsStreamingSource(AActor* InActor) {
}

TMap<FString, FString> UBGUWCStreamingFuncLib::QueryProcessingStreamingLevels(UObject* InWorldContext) {
    return TMap<FString, FString>();
}

void UBGUWCStreamingFuncLib::PauseDistanceStreaming(UObject* InWorldContext, const TArray<FString>& InExcludedLevelKeywords) {
}

void UBGUWCStreamingFuncLib::ModifyStreamingDistanceScaleByStreamingLayer(UObject* InWorldContext, const FString& InTargetLayerName, int32 InTargetLODIndex, float InTargetScaleFactor, bool bBlockTillStreamingCompleted) {
}

bool UBGUWCStreamingFuncLib::IsLevelStreamable(UObject* InWorldContext, const FString& InTargetLevelName) {
    return false;
}

int32 UBGUWCStreamingFuncLib::GetProcessingStreamingLevelNum(UObject* InWorldContext) {
    return 0;
}

TArray<FString> UBGUWCStreamingFuncLib::GetLevelNamesByKeyword(UObject* InWorldContext, const FString& InLevelNameKeyword) {
    return TArray<FString>();
}

int32 UBGUWCStreamingFuncLib::GetLevelNames(UObject* InWorldContext, TArray<FString>& OutLevelNames) {
    return 0;
}

void UBGUWCStreamingFuncLib::GetLevelCurrentStateAndIsConsideredUpdate(UObject* InWorldContext, const TArray<FString>& LevelNames, TMap<FString, uint8>& OutLevelStreamingList, TSet<FString>& OutCosideredUpdateSet) {
}

int32 UBGUWCStreamingFuncLib::GetAllLevelCurrentState(UObject* InWorldContext, TMap<FString, uint8>& OutLevelStreamingList, bool bIgnoreWCTile) {
    return 0;
}

void UBGUWCStreamingFuncLib::ForceLoadAllStreamingLevels(UObject* InWorldContext) {
}

void UBGUWCStreamingFuncLib::FlushAllLevelState(UObject* InWorldContext, const TArray<FString>& InExcludedLevelKeywords) {
}

void UBGUWCStreamingFuncLib::EnableStreamingSource(AActor* InActor) {
}

void UBGUWCStreamingFuncLib::DisableStreamingSource(AActor* InActor) {
}

void UBGUWCStreamingFuncLib::DestroyGSWCWorldStreamingSources(UObject* WorldContext) {
}

void UBGUWCStreamingFuncLib::CheckLevelState(UObject* InWorldContext, const FString& InTargetLevelName) {
}

void UBGUWCStreamingFuncLib::CacheWorldCompositionStreamingLayers(UObject* InWorldContext) {
}

void UBGUWCStreamingFuncLib::CacheWorldCompositionLevelNames(UObject* InWorldContext) {
}



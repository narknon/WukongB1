#include "GSReplayFuncLib.h"

UGSReplayFuncLib::UGSReplayFuncLib() {
}

void UGSReplayFuncLib::UnRegisterNetworkRemapPath(const UObject* WorldContext) {
}

void UGSReplayFuncLib::UnregisterCSharpFuncLibObj(const UObject* WorldContext) {
}

void UGSReplayFuncLib::StopReplay(const UObject* WorldContext) {
}

void UGSReplayFuncLib::SkipTime(const UObject* WorldContext, const float InTimeToSkip) {
}

void UGSReplayFuncLib::SetDemoPlayTimeDilation(const UObject* WorldContext, const float InDemoPlayTimeDilation) {
}

void UGSReplayFuncLib::SetDemoCurrentTime(const UObject* WorldContext, const float CurrentTime) {
}

void UGSReplayFuncLib::SetActorPrioritizationEnabled(const UObject* WorldContext, const bool bInPrioritizeActors) {
}

void UGSReplayFuncLib::RequestCheckpoint(const UObject* WorldContext) {
}

bool UGSReplayFuncLib::RegisterNetworkRemapPath(const UObject* WorldContext) {
    return false;
}

void UGSReplayFuncLib::RegisterCSharpFuncLibObj(const UObject* WorldContext, UGSReplayCSharpFuncLib* CSharpFuncLibObj) {
}

void UGSReplayFuncLib::RecordReplayToLocalFile(const UObject* WorldContext, const FString& Name, const FString& FriendlyName, TArray<FString> InOptions) {
}

void UGSReplayFuncLib::PlayReplayFromLocalFile(const UObject* WorldContext, const FString& Name, TArray<FString> InOptions) {
}

void UGSReplayFuncLib::PauseReplay(const UObject* WorldContext, bool bPause) {
}

bool UGSReplayFuncLib::IsReplayPause(const UObject* WorldContext) {
    return false;
}

bool UGSReplayFuncLib::IsRecordingReplay(const UObject* WorldContext) {
    return false;
}

bool UGSReplayFuncLib::IsPlayingReplay(const UObject* WorldContext) {
    return false;
}

bool UGSReplayFuncLib::IsLoadingCheckpoint(const UObject* WorldContext) {
    return false;
}

double UGSReplayFuncLib::GetLastCheckpointTime(const UObject* WorldContext) {
    return 0.0;
}

float UGSReplayFuncLib::GetDemoTotalTime(const UObject* WorldContext) {
    return 0.0f;
}

float UGSReplayFuncLib::GetDemoPlayTimeDilation(const UObject* WorldContext) {
    return 0.0f;
}

float UGSReplayFuncLib::GetDemoCurrentTime(const UObject* WorldContext) {
    return 0.0f;
}



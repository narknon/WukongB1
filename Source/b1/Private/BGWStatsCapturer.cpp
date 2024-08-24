#include "BGWStatsCapturer.h"

ABGWStatsCapturer::ABGWStatsCapturer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TickInterval = 0.10f;
    this->bCaptureSwitch = false;
    this->bCapturingVRAMInfo = false;
    this->StatDataTable = NULL;
}

TArray<FGSCapturedStatResult> ABGWStatsCapturer::GetTotalCapturedPerfInfo() {
    return TArray<FGSCapturedStatResult>();
}

int64 ABGWStatsCapturer::GetStartCycle() {
    return 0;
}

TArray<FGSCapturedStatResult> ABGWStatsCapturer::GetDesiredVRAMInfo() {
    return TArray<FGSCapturedStatResult>();
}

TArray<FGSCapturedStatResult> ABGWStatsCapturer::GetDesiredStatsValue() {
    return TArray<FGSCapturedStatResult>();
}

void ABGWStatsCapturer::ExecuteRHIDumpResMemCmds() {
}

void ABGWStatsCapturer::EnableCapturing_DT(bool bTriggerLogListening, UDataTable* InStatDataTable) {
}

void ABGWStatsCapturer::EnableCapturing(bool bTriggerLogListening, const FString& MetricsConfigPathUnderProjDir) {
}

void ABGWStatsCapturer::DisableCapturing(bool bIsStop) {
}



#include "BGUMotionMatchingDebugComp.h"

UBGUMotionMatchingDebugComp::UBGUMotionMatchingDebugComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisable = false;
    this->bDebugPlayer = false;
    this->TamerBP = NULL;
}

void UBGUMotionMatchingDebugComp::Restart() {
}

void UBGUMotionMatchingDebugComp::StopDebugPlayer() {
}

void UBGUMotionMatchingDebugComp::BeginPlayInCS_Implementation() {
}

void UBGUMotionMatchingDebugComp::TickComponentInCS_Implementation(float DeltaTime) {
}



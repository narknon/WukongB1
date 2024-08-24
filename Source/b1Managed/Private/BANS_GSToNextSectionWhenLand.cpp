#include "BANS_GSToNextSectionWhenLand.h"

UBANS_GSToNextSectionWhenLand::UBANS_GSToNextSectionWhenLand() {
    this->LineTraceStartSocket = TEXT("pelvis");
    this->LineTraceLengthFix = 0.00f;
    this->JumpSectionName = TEXT("End");
    this->EnableDebug = false;
}

void UBANS_GSToNextSectionWhenLand::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSToNextSectionWhenLand::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSToNextSectionWhenLand::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



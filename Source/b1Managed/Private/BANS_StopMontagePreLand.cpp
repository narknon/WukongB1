#include "BANS_StopMontagePreLand.h"

UBANS_StopMontagePreLand::UBANS_StopMontagePreLand() {
    this->LineTraceLengthFix = 0.00f;
    this->EnableDebug = false;
}

void UBANS_StopMontagePreLand::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_StopMontagePreLand::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_StopMontagePreLand::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



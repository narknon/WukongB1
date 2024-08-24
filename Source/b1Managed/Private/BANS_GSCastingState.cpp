#include "BANS_GSCastingState.h"
#include "EGsEnAnimNS.h"

UBANS_GSCastingState::UBANS_GSCastingState() {
    this->AnimNSType = EGsEnAnimNS::Casting;
}

void UBANS_GSCastingState::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSCastingState::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSCastingState::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



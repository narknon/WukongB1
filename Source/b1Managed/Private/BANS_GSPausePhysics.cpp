#include "BANS_GSPausePhysics.h"

UBANS_GSPausePhysics::UBANS_GSPausePhysics() {
    this->CanBePlacedInASCS = true;
    this->CanUseQueuedType = true;
    this->IncludeChildren = false;
}

void UBANS_GSPausePhysics::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSPausePhysics::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSPausePhysics::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



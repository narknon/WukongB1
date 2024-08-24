#include "BANS_GSCatchAndThrow.h"

UBANS_GSCatchAndThrow::UBANS_GSCatchAndThrow() {
    this->VictimDuringCatchMontage = NULL;
    this->VictimBeThrownMontage = NULL;
    this->bEnablePhysicsBlending = false;
}

void UBANS_GSCatchAndThrow::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSCatchAndThrow::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSCatchAndThrow::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



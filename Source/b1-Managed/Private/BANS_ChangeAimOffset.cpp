#include "BANS_ChangeAimOffset.h"

UBANS_ChangeAimOffset::UBANS_ChangeAimOffset() {
    this->bIsDefaultAO = false;
    this->AimOffset = NULL;
}

void UBANS_ChangeAimOffset::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_ChangeAimOffset::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



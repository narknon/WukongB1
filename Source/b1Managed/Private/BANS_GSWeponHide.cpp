#include "BANS_GSWeponHide.h"

UBANS_GSWeponHide::UBANS_GSWeponHide() {
    this->IsHidden = false;
    this->OpenCollisionIfNotHidden = false;
    this->NotRestore = false;
}

void UBANS_GSWeponHide::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSWeponHide::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



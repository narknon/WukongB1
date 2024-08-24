#include "BANS_GSSetCollisionEnabledByTag.h"

UBANS_GSSetCollisionEnabledByTag::UBANS_GSSetCollisionEnabledByTag() {
    this->EnableType = ECollisionEnabled::NoCollision;
}

void UBANS_GSSetCollisionEnabledByTag::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSetCollisionEnabledByTag::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



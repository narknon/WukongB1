#include "BANS_GSPoleDrink.h"

UBANS_GSPoleDrink::UBANS_GSPoleDrink() {
    this->CanUseQueuedType = true;
    this->DrinkHPBottomSuccessAM = NULL;
    this->DrinkHPBottomFailedAM = NULL;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
}

void UBANS_GSPoleDrink::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSPoleDrink::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



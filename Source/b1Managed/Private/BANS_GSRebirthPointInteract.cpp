#include "BANS_GSRebirthPointInteract.h"

UBANS_GSRebirthPointInteract::UBANS_GSRebirthPointInteract() {
    this->bAttachToOwner = false;
    this->Actor = NULL;
    this->bAttachOtherOnFinish = false;
}

void UBANS_GSRebirthPointInteract::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSRebirthPointInteract::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSRebirthPointInteract::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



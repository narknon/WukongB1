#include "BANS_GSTestIn426.h"

UBANS_GSTestIn426::UBANS_GSTestIn426() {
    this->TestValue = 0.00f;
    this->BuffID = 0;
    this->UseBuffDescDuration = false;
}

void UBANS_GSTestIn426::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSTestIn426::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSTestIn426::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



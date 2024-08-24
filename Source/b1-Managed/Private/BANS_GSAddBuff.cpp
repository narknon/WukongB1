#include "BANS_GSAddBuff.h"

UBANS_GSAddBuff::UBANS_GSAddBuff() {
    this->BuffID = EBPBuffID::NoneBuff;
    this->BuffLayer = 1;
    this->UseBuffDescDuration = false;
}

void UBANS_GSAddBuff::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAddBuff::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSAddBuff::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



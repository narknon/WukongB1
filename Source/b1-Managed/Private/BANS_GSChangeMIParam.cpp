#include "BANS_GSChangeMIParam.h"

UBANS_GSChangeMIParam::UBANS_GSChangeMIParam() {
    this->ParamStart = 0.00f;
    this->ParamEnd = 0.00f;
}

void UBANS_GSChangeMIParam::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSChangeMIParam::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSChangeMIParam::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



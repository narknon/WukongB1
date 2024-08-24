#include "BANS_GSCallPointsRegister.h"

UBANS_GSCallPointsRegister::UBANS_GSCallPointsRegister() {
    this->RegistID = 0;
    this->GenType = PointsGenType::ByEQS_Async;
}

void UBANS_GSCallPointsRegister::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



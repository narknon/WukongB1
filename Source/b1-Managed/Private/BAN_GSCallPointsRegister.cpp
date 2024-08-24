#include "BAN_GSCallPointsRegister.h"

UBAN_GSCallPointsRegister::UBAN_GSCallPointsRegister() {
    this->RegistID = 0;
    this->GenType = PointsGenType::ByEQS_Async;
}

void UBAN_GSCallPointsRegister::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSCallPointsRegister::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}



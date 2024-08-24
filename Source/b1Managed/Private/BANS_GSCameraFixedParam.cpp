#include "BANS_GSCameraFixedParam.h"

UBANS_GSCameraFixedParam::UBANS_GSCameraFixedParam() {
    this->FixedCameraParam = CameraParamType::ArmLocationX;
}

void UBANS_GSCameraFixedParam::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSCameraFixedParam::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



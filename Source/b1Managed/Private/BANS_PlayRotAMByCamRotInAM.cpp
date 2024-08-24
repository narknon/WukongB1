#include "BANS_PlayRotAMByCamRotInAM.h"

UBANS_PlayRotAMByCamRotInAM::UBANS_PlayRotAMByCamRotInAM() {
    this->CanUseQueuedType = true;
    this->RotTypeInSmallAngle = RotTypeInSmallAngle::SimpleRotate;
    this->RotTypeInLargeAngle = RotTypeInLargeAngle::AMMatryoshka;
    this->AngleThreshold = 0.00f;
    this->TurnSpd = 0.00f;
    this->RotateWithCamSpeed = 0.00f;
    this->TurnRightAM = NULL;
    this->TurnLeftAM = NULL;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
}

void UBANS_PlayRotAMByCamRotInAM::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_PlayRotAMByCamRotInAM::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_PlayRotAMByCamRotInAM::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



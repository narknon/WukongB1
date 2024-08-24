#include "BANS_GSJumpToPosition.h"

UBANS_GSJumpToPosition::UBANS_GSJumpToPosition() {
    this->JumpTarget = EBGUJumpTargetType::CurrentTarget;
    this->Height = 0.00f;
    this->TargetAddCapsuleHalfHeight = true;
    this->CalibrationTrans = false;
    this->bResetSceneItemOnFinish = false;
}

void UBANS_GSJumpToPosition::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



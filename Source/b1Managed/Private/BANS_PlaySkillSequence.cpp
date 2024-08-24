#include "BANS_PlaySkillSequence.h"

UBANS_PlaySkillSequence::UBANS_PlaySkillSequence() {
    this->RotationType = SkillCameraRotationType::UseUnitRotation;
    this->bAttachToUnit = false;
    this->bMoveCameraSpringArmRotToNearestAfterAS = true;
    this->TeleportAngleDeg = 180.00f;
    this->bInCameraBlendTimeUseNotifyStateLength = false;
    this->InCameraBlendTime = 1.00f;
    this->InCameraBlendFactor = 1.50f;
    this->bEnableCameraAutoBlendOut = true;
    this->OutCameraBlendTime = 1.00f;
    this->OutCameraBlendFactor = 1.50f;
}

void UBANS_PlaySkillSequence::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

TArray<FSoftObjectPath> UBANS_PlaySkillSequence::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}



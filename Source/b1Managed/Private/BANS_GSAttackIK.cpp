#include "BANS_GSAttackIK.h"

UBANS_GSAttackIK::UBANS_GSAttackIK() {
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->TouchIKType = TouchIKType::LeftHand;
    this->bDrawDebugRange = false;
    this->DebugCapsuleThickness = 1.00f;
    this->DebugBoxThickness = 4.00f;
    this->bUseFullBodyIK = false;
    this->AttackIKType = AttackIKType::None;
    this->FishSpikeJumpType = FishSpikeJumpType::Default;
    this->FishSpikeDistance = 0.00f;
    this->JumpMax = 0.00f;
    this->DebugFishSpikeEnable = false;
    this->BoneScaleEnable = false;
}

void UBANS_GSAttackIK::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAttackIK::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSAttackIK::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



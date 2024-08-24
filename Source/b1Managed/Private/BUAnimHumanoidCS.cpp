#include "BUAnimHumanoidCS.h"

UBUAnimHumanoidCS::UBUAnimHumanoidCS() {
    this->HandIKAlpha = 0.00f;
    this->DefaultAOAlpha = 0.00f;
    this->AttackAOAlpha = 0.00f;
    this->BSSlotAlpha = 0.00f;
    this->MMKeepAlpha = 0.00f;
    this->bEnableAnyCurveBodyBlend = false;
    this->bHasUpperBodySlotMontage = false;
    this->bHasLeftArmSlotMontage = false;
    this->bHasRightArmSlotMontage = false;
    this->bUsePoseOverride = false;
    this->EnableSnapshotBlendTime = 0.00f;
    this->DisableSnapshotBlendTime = 0.00f;
    this->bEnableAnimCurveBodySeparation = false;
    this->AMMatryoshkaAlpha = 0.00f;
    this->AttackIKAlpha = 0.00f;
    this->bDisableABPMove = false;
    this->bHasMoveInput = false;
    this->bHasPlayerInput = false;
    this->MappedSpeed = 0.00f;
    this->HeadAimYaw = 0.00f;
    this->HeadAimPitch = 0.00f;
    this->HeadAimAlpha = 0.00f;
    this->FootIKAlpha = 0.00f;
    this->IKPelivisAlpha = 0.00f;
    this->IKSpinePitch = 0.00f;
    this->IKSpineRoll = 0.00f;
    this->IKInterpSpeed = 0.00f;
    this->bEnableIK = false;
    this->AnimIdle = NULL;
    this->DefaultAimOffset = NULL;
    this->AttackAimOffset = NULL;
    this->bIsAttackAimOffsetEnable = false;
    this->AttackAimOffsetEnableX = 0.00f;
    this->AttackAimOffsetEnableY = 0.00f;
    this->EnableAimOffset = false;
    this->IsFarButInSight = false;
    this->bIsPlayer = false;
    this->AnimDingShenStart = NULL;
    this->AnimDingShenHold = NULL;
    this->BSSlot = NULL;
    this->BSSlotY = 0.00f;
    this->BSSlotX = 0.00f;
    this->IsBSSlot = false;
    this->WeaponAimAlpha = 0.00f;
    this->PhysicBlendAlpha = 0.00f;
    this->SlopeAlpha = 0.00f;
    this->ASSlopeAdditiveLocalSpace = NULL;
    this->ASSlopeAdditiveMeshSpace = NULL;
    this->BSMoveSpeedAdditive = NULL;
}

void UBUAnimHumanoidCS::BlueprintThreadSafeUpdateAnimation_Implementation(float DeltaTimeX) {
}



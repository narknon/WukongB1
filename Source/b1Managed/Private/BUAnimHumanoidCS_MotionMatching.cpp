#include "BUAnimHumanoidCS_MotionMatching.h"

UBUAnimHumanoidCS_MotionMatching::UBUAnimHumanoidCS_MotionMatching() {
    this->InputStrength = 0.00f;
    this->MotionMatchingState = State_MM::None;
    this->UseMotionMatching = false;
    this->SpareMoveMode = EABPMoveMode::None;
    this->CurrentAA = NULL;
    this->AnimationAnalyzerBlendTime = 0.00f;
    this->MotionBlendTime = 0.00f;
    this->MMPlayRate = 0.00f;
    this->ForceSetRotAnimSpeed = 0.00f;
    this->DisableRotVerifyAnimSpeed = 0.00f;
    this->bRecordMMAnimData = false;
    this->bDisableLocomotionIdle = false;
    this->bForceMMToIdle = false;
    this->MMUpBodyStateAlpha = 0.00f;
    this->RotateAdditiveBS = NULL;
    this->RotateBSX = 0.00f;
    this->bMMtoIdle = false;
    this->bIdleToMM = false;
    this->bNeedFixMM = false;
    this->bFixMMWeapon_MeshSpaceRotation = false;
    this->MMAdditivePose = NULL;
    this->bFixMMAdditive_MeshSpaceRotation = false;
    this->MMAdditiveWeight = 0.00f;
    this->MMTransAnim = NULL;
    this->MMTransAnimStartPos = 0.00f;
    this->MMTransAlpha = 0.00f;
    this->bMMTransFinish = false;
    this->bMMTransStart = false;
    this->bKeepMMInputUnchanged = false;
    this->bUseLMAnim = false;
    this->bDisableMMRootMotion = false;
    this->Speed = 0.00f;
    this->AnimIdle = NULL;
    this->BSRunFwd = NULL;
}

void UBUAnimHumanoidCS_MotionMatching::SetupDefaultMMPoseData(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}



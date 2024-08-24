#include "BUAnimHumanoidCS_QuadrupedLocomotion.h"

UBUAnimHumanoidCS_QuadrupedLocomotion::UBUAnimHumanoidCS_QuadrupedLocomotion() {
    this->BSMove = NULL;
    this->BSMoveBack = NULL;
    this->MoveYaw = 0.00f;
    this->SpeedRate = 0.00f;
    this->ASWalkStop = NULL;
    this->ASRunStartF = NULL;
    this->ASRunStartL = NULL;
    this->ASRunStartR = NULL;
    this->ASRunStartBL = NULL;
    this->ASRunStartBR = NULL;
    this->ASRunTurnStop = NULL;
    this->ASRunTurnL = NULL;
    this->ASRunTurnR = NULL;
    this->ASRunTurnBL = NULL;
    this->ASRunTurnBR = NULL;
    this->ASRunStop = NULL;
    this->ASRushStartF = NULL;
    this->ASRushStartL = NULL;
    this->ASRushStartR = NULL;
    this->ASRushStartBL = NULL;
    this->ASRushStartBR = NULL;
    this->ASRushTurnStop = NULL;
    this->ASRushTurnL = NULL;
    this->ASRushTurnR = NULL;
    this->ASRushTurnBL = NULL;
    this->ASRushTurnBR = NULL;
    this->ASRushStop = NULL;
    this->ASRunJump = NULL;
    this->ASRushJump = NULL;
    this->ASRunJumpSlope = NULL;
    this->ASRushJumpSlope = NULL;
    this->bUpdateAnimIdle = false;
    this->bShouldMove = false;
    this->bIdleToStart = false;
    this->bIdleToLoop = false;
    this->bLoopToIdle = false;
    this->bMoveBack = false;
    this->bInJump = false;
    this->bSlopeJump = false;
    this->bToFall = false;
    this->bToLandAnim = false;
    this->bToLandMove = false;
    this->bToTurn = false;
    this->bToStop = false;
    this->bToTurnStop = false;
    this->bToWalk = false;
    this->bToRun = false;
    this->bToRush = false;
    this->bToRunJump = false;
    this->bToRushJump = false;
    this->bToF = false;
    this->bToL = false;
    this->bToR = false;
    this->bToBL = false;
    this->bToBR = false;
}

void UBUAnimHumanoidCS_QuadrupedLocomotion::SetupFallAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_QuadrupedLocomotion::GetRandomIdleAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_QuadrupedLocomotion::SetupLandMoveAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_QuadrupedLocomotion::SetupLandStopAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}



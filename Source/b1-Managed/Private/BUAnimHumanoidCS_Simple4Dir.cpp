#include "BUAnimHumanoidCS_Simple4Dir.h"

UBUAnimHumanoidCS_Simple4Dir::UBUAnimHumanoidCS_Simple4Dir() {
    this->BSStart = NULL;
    this->BSEnd = NULL;
    this->CardinalDirectionBlendTime = 0.00f;
    this->AnimTurnInPlaceLeft = NULL;
    this->AnimTurnInPlaceRight = NULL;
    this->BSWalkFwd = NULL;
    this->BSWalkBwd = NULL;
    this->BSWalkLeft = NULL;
    this->BSWalkRight = NULL;
    this->BSRunFwd = NULL;
    this->BSRunBwd = NULL;
    this->BSRunLeft = NULL;
    this->BSRunRight = NULL;
    this->BSSprint = NULL;
    this->AnimIdle = NULL;
    this->Speed = 0.00f;
    this->VerticleSpeed = 0.00f;
    this->HorizontalSpeed = 0.00f;
    this->bHasRun = false;
    this->JogBaseSpeed = 0.00f;
    this->RunSpeed = 0.00f;
    this->SprintSpeed = 0.00f;
    this->IsFalling = false;
    this->LeanAngle = 0.00f;
    this->SlopeRightAngle = 0.00f;
    this->SlopeForwardAngle = 0.00f;
    this->SpeedWarpAmount = 0.00f;
    this->BSStartX = 0.00f;
    this->BSStartY = 0.00f;
    this->BSStopX = 0.00f;
    this->BSStopY = 0.00f;
    this->BSStopNoBreakX = 0.00f;
    this->BSStopNoBreakY = 0.00f;
    this->bLoopToIdle = false;
    this->bLoopToStop = false;
    this->bLoopToStopWithNoBreak = false;
    this->bStartToLoop = false;
    this->bIdleToLoop = false;
    this->bIdleToStart = false;
    this->bStartToIdle = false;
    this->bStopToIdle = false;
    this->bStopWithNoBreakToIdle = false;
    this->LocomotionCardinalDirection = CardinalDir::Default;
    this->LocomotionOrientationAngle = 0.00f;
    this->AnimFallingStart = NULL;
    this->AnimFallingLoop = NULL;
    this->AnimFallingLand = NULL;
    this->FallingLoopPlayRate = 0.00f;
    this->bHasJumpAnimAsset = false;
}



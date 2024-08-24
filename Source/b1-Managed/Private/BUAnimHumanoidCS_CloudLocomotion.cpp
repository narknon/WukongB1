#include "BUAnimHumanoidCS_CloudLocomotion.h"

UBUAnimHumanoidCS_CloudLocomotion::UBUAnimHumanoidCS_CloudLocomotion() {
    this->LeanPitchAdditvie_Up = NULL;
    this->LeanPitchAdditvie_Down = NULL;
    this->StartFwd = NULL;
    this->StartFwdL = NULL;
    this->StartFwdR = NULL;
    this->StartBwdL = NULL;
    this->StartBwdR = NULL;
    this->RunLoop = NULL;
    this->RushLoop = NULL;
    this->RunLoopAdditvie_Left = NULL;
    this->RunLoopAdditvie_Right = NULL;
    this->RushLoopAdditvie_Left = NULL;
    this->RushLoopAdditvie_Right = NULL;
    this->RunStop = NULL;
    this->RushStop = NULL;
    this->bUpdateAnimIdle = false;
    this->InputVelocityAngle = 0.00f;
    this->MappedSpeed = 0.00f;
    this->GaitGroundedState = GaitGroundedState::None;
    this->StartAngle = 0.00f;
    this->RotationSpeed = 0.00f;
    this->MaxAcceleration = 0.00f;
}

void UBUAnimHumanoidCS_CloudLocomotion::SetupIdleAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}



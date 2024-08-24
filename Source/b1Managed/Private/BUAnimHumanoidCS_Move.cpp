#include "BUAnimHumanoidCS_Move.h"

UBUAnimHumanoidCS_Move::UBUAnimHumanoidCS_Move() {
    this->FinalABPMoveMode = EABPMoveMode::None;
    this->AnimTurnInPlaceLeft = NULL;
    this->AnimTurnInPlaceRight = NULL;
    this->AnimTurnInPlaceLeft180 = NULL;
    this->AnimTurnInPlaceRight180 = NULL;
    this->IsStandRotateStart = false;
    this->IsMoveAccelerating = false;
    this->StandRotateType = StandRotateType::Left90;
    this->RotateAngle = 0.00f;
    this->bCanMMRetarget = false;
}



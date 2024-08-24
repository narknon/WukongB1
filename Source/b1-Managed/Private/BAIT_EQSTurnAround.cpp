#include "BAIT_EQSTurnAround.h"

UBAIT_EQSTurnAround::UBAIT_EQSTurnAround() {
    this->PerferCloser = false;
    this->BeginRotateAngle = 0.00f;
    this->AcceptableRadius = 0.00f;
    this->EQSTemplate = NULL;
    this->MoveAIType = EBGUMoveAIType::None;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
    this->AutoUpdatePathTime = 0.00f;
    this->EnableDebug = false;
    this->OwnerCharacter = NULL;
}



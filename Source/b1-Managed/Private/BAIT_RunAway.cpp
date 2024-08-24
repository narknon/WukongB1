#include "BAIT_RunAway.h"

UBAIT_RunAway::UBAIT_RunAway() {
    this->RestRadius = 0.00f;
    this->RestTime = 0.00f;
    this->RestTimeInterval = 0.00f;
    this->MoveTimeInterval = 0.00f;
    this->LifeTime = 0.00f;
    this->MoveToTargetPoint = false;
    this->AchieveLifeTime = 0.00f;
    this->AcceptableRadius = 0.00f;
    this->IncludeSelfRadius = false;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
    this->MoveAIType = EBGUMoveAIType::None;
}



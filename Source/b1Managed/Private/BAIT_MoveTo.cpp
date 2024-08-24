#include "BAIT_MoveTo.h"

UBAIT_MoveTo::UBAIT_MoveTo() {
    this->MaxMoveTime = 0.00f;
    this->AcceptableRadius = 0.00f;
    this->IncludeSelfRadius = true;
    this->IncludeTargetRadius = false;
    this->MotionMatchingState = State_MM::None;
    this->BTTargetType = EBTTargetType::Target;
    this->MoveAIType = EBGUMoveAIType::None;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
    this->SpeedRateDistanceCurve = NULL;
    this->EnableRangeAcceptableRadius = false;
    this->MinAcceptableRadius = 0.00f;
    this->MaxAcceptableRadius = 0.00f;
}



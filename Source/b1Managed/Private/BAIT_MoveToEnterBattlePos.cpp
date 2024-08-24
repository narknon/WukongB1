#include "BAIT_MoveToEnterBattlePos.h"

UBAIT_MoveToEnterBattlePos::UBAIT_MoveToEnterBattlePos() {
    this->AcceptableRadius = 0.00f;
    this->IncludeSelfRadius = true;
    this->IncludeTargetRadius = false;
    this->MoveAIType = EBGUMoveAIType::None;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
    this->SpeedRateDistanceCurve = NULL;
    this->EnableRangeAcceptableRadius = false;
    this->MinAcceptableRadius = 0.00f;
    this->MaxAcceptableRadius = 0.00f;
    this->EnableDebug = false;
}



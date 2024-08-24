#include "BAIT_SpiderMoveTo.h"

UBAIT_SpiderMoveTo::UBAIT_SpiderMoveTo() {
    this->MaxMoveTime = 0.00f;
    this->AcceptableRadius = 0.00f;
    this->IncludeSelfRadius = true;
    this->IncludeTargetRadius = false;
    this->BTTargetType = EBTTargetType::Target;
    this->TargetPositionType = SpiderNavPositionType::Ground;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
}



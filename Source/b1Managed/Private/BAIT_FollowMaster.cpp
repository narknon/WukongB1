#include "BAIT_FollowMaster.h"

UBAIT_FollowMaster::UBAIT_FollowMaster() {
    this->AcceptableRaidus = 0.00f;
    this->IncludeSelfRadius = true;
    this->IncludeTargetRadius = false;
    this->MoveAIType = EBGUMoveAIType::None;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
}



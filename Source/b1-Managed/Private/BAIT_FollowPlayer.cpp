#include "BAIT_FollowPlayer.h"

UBAIT_FollowPlayer::UBAIT_FollowPlayer() {
    this->AcceptableRaidus = 0.00f;
    this->IncludeSelfRadius = true;
    this->IncludeTargetRadius = false;
    this->MoveAIType = EBGUMoveAIType::None;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
}



#include "BAIT_MoveToOnWallAndCell.h"

UBAIT_MoveToOnWallAndCell::UBAIT_MoveToOnWallAndCell() {
    this->AcceptableRadius = 0.00f;
    this->IncludeSelfRadius = true;
    this->SpeedRateType = EAIMoveSpeedType::RUN;
    this->turnSpeed = 120.00f;
    this->EnableRangeAcceptableRadius = false;
    this->MinAcceptableRadius = 0.00f;
    this->MaxAcceptableRadius = 0.00f;
    this->EnableDebug = false;
}



#include "BAID_CheckDistance.h"

UBAID_CheckDistance::UBAID_CheckDistance() {
    this->CheckTarget = EAICheckTarget::CachedScencItem;
    this->CheckDistanceType = EAICheckDistanceType::LocationDistanceXY;
    this->Distance = 0.00f;
    this->PreferCloser = false;
}



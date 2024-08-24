#include "BAID_DistanceCheckTest.h"

UBAID_DistanceCheckTest::UBAID_DistanceCheckTest() {
    this->CheckTarget = EAICheckTarget::CachedScencItem;
    this->CheckDistanceType = EAICheckDistanceType::LocationDistanceXY;
    this->Distance = 0.00f;
    this->PreferCloser = false;
}



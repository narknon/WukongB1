#include "BGU_AIMoverRequest.h"

FBGU_AIMoverRequest::FBGU_AIMoverRequest() {
    this->AllowPartialPath = false;
    this->CanStrafe = false;
    this->ReachTestIncludesAgentRadius = false;
    this->ReachTestIncludesGoalRadius = false;
    this->ProjectGoalLocation = false;
    this->UsePathfinding = false;
    this->AcceptanceRadius = 0.00f;
    this->TargetActor = NULL;
}


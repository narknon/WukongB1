#include "DoNNavigationQueryParams.h"

FDoNNavigationQueryParams::FDoNNavigationQueryParams() {
    this->QueryTimeout = 0.00f;
    this->bFlexibleOriginGoal = false;
    this->bSkipOptimizationPass = false;
    this->MaxOptimizerSweepAttemptsPerNode = 0;
    this->bPreciseDynamicCollisionRepathing = false;
    this->bIgnoreDynamicCollisionRepathingForDirectGoals = false;
    this->CollisionShapeInflation = 0.00f;
    this->bForceRescheduleQuery = false;
}


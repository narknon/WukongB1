#include "MotionAnim.h"

FMotionAnim::FMotionAnim() {
    this->AnimationAnalyzer = NULL;
    this->AnimIndex = 0;
    this->position = 0.00f;
    this->AllowedMotionTransitionTime = 0.00f;
    this->Limit = 0.00f;
    this->LimitOfOperation = false;
}


#include "MotionMatchingAnimGraph.h"

FMotionMatchingAnimGraph::FMotionMatchingAnimGraph() {
    this->AnimationAnalyzer = NULL;
    this->InputStrength = 0.00f;
    this->PlayRate = 0.00f;
    this->BlendTime = 0.00f;
    this->TimeBetweenBlends = 0.00f;
    this->bRecordAnimData = false;
    this->bDisableMMRootMotion = false;
    this->CurrentAnimationReferencesIndex = 0;
    this->WorldTimer = 0;
    this->ReferenceMMTimer = 0.00f;
    this->bAllowLooping = false;
}


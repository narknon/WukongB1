#include "BED_BehaviorNode_Log.h"

UBED_BehaviorNode_Log::UBED_BehaviorNode_Log() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->LogTime = 0;
}

bool UBED_BehaviorNode_Log::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}



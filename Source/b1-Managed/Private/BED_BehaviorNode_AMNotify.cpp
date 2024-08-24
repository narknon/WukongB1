#include "BED_BehaviorNode_AMNotify.h"

UBED_BehaviorNode_AMNotify::UBED_BehaviorNode_AMNotify() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
}

bool UBED_BehaviorNode_AMNotify::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_AMNotify::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



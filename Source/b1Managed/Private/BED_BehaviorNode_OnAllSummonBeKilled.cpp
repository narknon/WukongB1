#include "BED_BehaviorNode_OnAllSummonBeKilled.h"

UBED_BehaviorNode_OnAllSummonBeKilled::UBED_BehaviorNode_OnAllSummonBeKilled() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
}

bool UBED_BehaviorNode_OnAllSummonBeKilled::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_OnAllSummonBeKilled::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



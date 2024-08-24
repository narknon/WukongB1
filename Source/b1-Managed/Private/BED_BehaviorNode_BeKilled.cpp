#include "BED_BehaviorNode_BeKilled.h"

UBED_BehaviorNode_BeKilled::UBED_BehaviorNode_BeKilled() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType_Victim = DetectedUnitType::Self;
    this->UnitType_Attacker = DetectedUnitType::Self;
}

bool UBED_BehaviorNode_BeKilled::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_BeKilled::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



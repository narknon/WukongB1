#include "BED_BehaviorNode_DetectUnit.h"

UBED_BehaviorNode_DetectUnit::UBED_BehaviorNode_DetectUnit() {
    this->OutputPins.AddDefaulted(2);
    this->UnitType = DetectedUnitType::Self;
    this->ConditionalRelation = ConditionalRelation::And;
}

bool UBED_BehaviorNode_DetectUnit::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_DetectUnit::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



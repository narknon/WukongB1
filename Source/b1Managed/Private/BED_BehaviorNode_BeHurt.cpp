#include "BED_BehaviorNode_BeHurt.h"

UBED_BehaviorNode_BeHurt::UBED_BehaviorNode_BeHurt() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
    this->CompareOperationType = ValueCompareOperationType::EqualTo;
    this->DmgValue = 0;
    this->UnitType_Attacker = DetectedUnitType::Self;
}

bool UBED_BehaviorNode_BeHurt::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_BeHurt::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



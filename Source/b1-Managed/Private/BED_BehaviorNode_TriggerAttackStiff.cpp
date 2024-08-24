#include "BED_BehaviorNode_TriggerAttackStiff.h"

UBED_BehaviorNode_TriggerAttackStiff::UBED_BehaviorNode_TriggerAttackStiff() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
    this->CompareOperationType = ValueCompareOperationType::EqualTo;
    this->StiffLevel = 0;
    this->UnitType_Attacker = DetectedUnitType::Self;
}

bool UBED_BehaviorNode_TriggerAttackStiff::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_TriggerAttackStiff::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



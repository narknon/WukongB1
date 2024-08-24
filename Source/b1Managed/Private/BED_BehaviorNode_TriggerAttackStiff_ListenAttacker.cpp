#include "BED_BehaviorNode_TriggerAttackStiff_ListenAttacker.h"

UBED_BehaviorNode_TriggerAttackStiff_ListenAttacker::UBED_BehaviorNode_TriggerAttackStiff_ListenAttacker() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
    this->CompareOperationType = ValueCompareOperationType::EqualTo;
    this->StiffLevel = 0;
    this->UnitType_Victim = DetectedUnitType::Self;
}

bool UBED_BehaviorNode_TriggerAttackStiff_ListenAttacker::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_TriggerAttackStiff_ListenAttacker::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



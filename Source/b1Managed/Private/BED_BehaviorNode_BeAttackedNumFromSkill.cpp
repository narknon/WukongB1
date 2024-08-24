#include "BED_BehaviorNode_BeAttackedNumFromSkill.h"

UBED_BehaviorNode_BeAttackedNumFromSkill::UBED_BehaviorNode_BeAttackedNumFromSkill() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
    this->SkillID = 0;
    this->CompareOperationType = ValueCompareOperationType::EqualTo;
    this->BeHittedNum = 0;
    this->TimeDuration = 0.00f;
}

bool UBED_BehaviorNode_BeAttackedNumFromSkill::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_BeAttackedNumFromSkill::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_BehaviorNode_BeAttackedNumFromSkillEffect.h"

UBED_BehaviorNode_BeAttackedNumFromSkillEffect::UBED_BehaviorNode_BeAttackedNumFromSkillEffect() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
    this->SkillEffectID = 0;
    this->CompareOperationType = ValueCompareOperationType::EqualTo;
    this->BeHittedNum = 0;
    this->TimeDuration = 0.00f;
}

bool UBED_BehaviorNode_BeAttackedNumFromSkillEffect::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_BeAttackedNumFromSkillEffect::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



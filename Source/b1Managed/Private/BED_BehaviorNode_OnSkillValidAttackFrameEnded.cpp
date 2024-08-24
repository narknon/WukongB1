#include "BED_BehaviorNode_OnSkillValidAttackFrameEnded.h"

UBED_BehaviorNode_OnSkillValidAttackFrameEnded::UBED_BehaviorNode_OnSkillValidAttackFrameEnded() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
    this->SkillID = 0;
}

bool UBED_BehaviorNode_OnSkillValidAttackFrameEnded::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_OnSkillValidAttackFrameEnded::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



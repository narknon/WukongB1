#include "BED_BehaviorNode_TriggerSkillEffect.h"

UBED_BehaviorNode_TriggerSkillEffect::UBED_BehaviorNode_TriggerSkillEffect() {
    this->InputPins.AddDefaulted(1);
    this->EffectID = 0;
}

FString UBED_BehaviorNode_TriggerSkillEffect::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



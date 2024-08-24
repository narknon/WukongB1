#include "BED_MovieNode_PerformerTriggerSkillEffect.h"

UBED_MovieNode_PerformerTriggerSkillEffect::UBED_MovieNode_PerformerTriggerSkillEffect() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->SkillEffectID = 0;
}

FString UBED_MovieNode_PerformerTriggerSkillEffect::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_ComboNode_Skill.h"

UBED_ComboNode_Skill::UBED_ComboNode_Skill() {
    this->InputPins.AddDefaulted(1);
    this->SkillID = 0;
}

FString UBED_ComboNode_Skill::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



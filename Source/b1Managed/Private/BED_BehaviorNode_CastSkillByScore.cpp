#include "BED_BehaviorNode_CastSkillByScore.h"

UBED_BehaviorNode_CastSkillByScore::UBED_BehaviorNode_CastSkillByScore() {
    this->InputPins.AddDefaulted(1);
    this->IsGetTopRandomSkill = false;
    this->TopRandomSkillPercent = 0;
    this->NeedTryCastAllSkillUntilSuccess = true;
}

FString UBED_BehaviorNode_CastSkillByScore::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



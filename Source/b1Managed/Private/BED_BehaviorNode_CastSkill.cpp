#include "BED_BehaviorNode_CastSkill.h"

UBED_BehaviorNode_CastSkill::UBED_BehaviorNode_CastSkill() {
    this->InputPins.AddDefaulted(1);
    this->SkillID = 0;
    this->NeedCheckSkillCanCast = true;
    this->bCanCastWhenDead = false;
}

FString UBED_BehaviorNode_CastSkill::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_ProcessStateNode_CastSkill.h"

UBED_ProcessStateNode_CastSkill::UBED_ProcessStateNode_CastSkill() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->SkillID = 0;
    this->NeedCheckSkillCanCast = true;
}



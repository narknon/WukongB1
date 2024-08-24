#include "BED_SkillNode_Start.h"
#include "ECalliopeNodeStyle.h"

UBED_SkillNode_Start::UBED_SkillNode_Start() {
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}



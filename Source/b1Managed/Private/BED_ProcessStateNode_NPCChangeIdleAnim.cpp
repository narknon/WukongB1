#include "BED_ProcessStateNode_NPCChangeIdleAnim.h"

UBED_ProcessStateNode_NPCChangeIdleAnim::UBED_ProcessStateNode_NPCChangeIdleAnim() {
    this->Category = TEXT("Notify");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->NeedChangeIdleAnimIdx = 0;
}



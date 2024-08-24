#include "BED_ProcessStateNode_NPCChangeLeisureAnim.h"

UBED_ProcessStateNode_NPCChangeLeisureAnim::UBED_ProcessStateNode_NPCChangeLeisureAnim() {
    this->Category = TEXT("Notify");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->NeedChangeLeisureAnimIdx = 0;
}



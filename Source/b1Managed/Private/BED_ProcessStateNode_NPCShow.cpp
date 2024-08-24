#include "BED_ProcessStateNode_NPCShow.h"

UBED_ProcessStateNode_NPCShow::UBED_ProcessStateNode_NPCShow() {
    this->Category = TEXT("Notify");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bIsShow = false;
}



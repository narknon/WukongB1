#include "BED_ProcessStateNode_NotifyActor.h"

UBED_ProcessStateNode_NotifyActor::UBED_ProcessStateNode_NotifyActor() {
    this->Category = TEXT("Notify");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



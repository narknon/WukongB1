#include "BED_ProcessStateNode_ResetActor.h"

UBED_ProcessStateNode_ResetActor::UBED_ProcessStateNode_ResetActor() {
    this->Category = TEXT("Notify");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ResetType = EBGUResetType::No;
}



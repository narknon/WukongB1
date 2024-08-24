#include "BED_ProcessStateNode_ActiveUnit.h"

UBED_ProcessStateNode_ActiveUnit::UBED_ProcessStateNode_ActiveUnit() {
    this->Category = TEXT("Notify");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



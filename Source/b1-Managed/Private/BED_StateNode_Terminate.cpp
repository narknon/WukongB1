#include "BED_StateNode_Terminate.h"

UBED_StateNode_Terminate::UBED_StateNode_Terminate() {
    this->bSupportsContextPins = false;
    this->Category = TEXT("Route");
    this->InputPins.AddDefaulted(1);
}



#include "BED_StateNode_Final.h"

UBED_StateNode_Final::UBED_StateNode_Final() {
    this->bSupportsContextPins = false;
    this->Category = TEXT("Route");
    this->InputPins.AddDefaulted(1);
}



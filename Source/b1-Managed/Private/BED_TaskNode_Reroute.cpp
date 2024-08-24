#include "BED_TaskNode_Reroute.h"

UBED_TaskNode_Reroute::UBED_TaskNode_Reroute() {
    this->Category = TEXT("Route");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



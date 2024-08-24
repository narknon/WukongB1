#include "BED_ProcessStateNode_Reroute.h"

UBED_ProcessStateNode_Reroute::UBED_ProcessStateNode_Reroute() {
    this->Category = TEXT("Route");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



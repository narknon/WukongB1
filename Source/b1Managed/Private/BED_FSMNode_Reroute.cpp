#include "BED_FSMNode_Reroute.h"

UBED_FSMNode_Reroute::UBED_FSMNode_Reroute() {
    this->Category = TEXT("Route");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



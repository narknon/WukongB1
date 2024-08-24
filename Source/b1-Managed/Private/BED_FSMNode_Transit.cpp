#include "BED_FSMNode_Transit.h"
#include "ECalliopeNodeStyle.h"

UBED_FSMNode_Transit::UBED_FSMNode_Transit() {
    this->NodeStyle = ECalliopeNodeStyle::Transit;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



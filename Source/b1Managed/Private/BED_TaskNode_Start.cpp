#include "BED_TaskNode_Start.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_Start::UBED_TaskNode_Start() {
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}



#include "BED_FSMNode_Start.h"
#include "ECalliopeNodeStyle.h"

UBED_FSMNode_Start::UBED_FSMNode_Start() {
    this->Category = TEXT("Comm");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}



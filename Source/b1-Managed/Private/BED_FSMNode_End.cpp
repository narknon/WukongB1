#include "BED_FSMNode_End.h"
#include "ECalliopeNodeStyle.h"

UBED_FSMNode_End::UBED_FSMNode_End() {
    this->Category = TEXT("Comm");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
}



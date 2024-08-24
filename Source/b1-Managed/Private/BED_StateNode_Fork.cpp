#include "BED_StateNode_Fork.h"
#include "ECalliopeNodeStyle.h"

UBED_StateNode_Fork::UBED_StateNode_Fork() {
    this->bSupportsContextPins = false;
    this->Category = TEXT("Operators");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

bool UBED_StateNode_Fork::CanUserAddOutputInCS_Implementation() const {
    return false;
}



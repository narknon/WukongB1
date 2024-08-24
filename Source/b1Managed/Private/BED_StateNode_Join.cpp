#include "BED_StateNode_Join.h"
#include "ECalliopeNodeStyle.h"

UBED_StateNode_Join::UBED_StateNode_Join() {
    this->bSupportsContextPins = false;
    this->Category = TEXT("Operators");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_StateNode_Join::CanUserAddInputInCS_Implementation() const {
    return false;
}



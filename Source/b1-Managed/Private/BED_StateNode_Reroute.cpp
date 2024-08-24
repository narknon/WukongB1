#include "BED_StateNode_Reroute.h"
#include "ECalliopeNodeStyle.h"

UBED_StateNode_Reroute::UBED_StateNode_Reroute() {
    this->bSupportsContextPins = false;
    this->Category = TEXT("Reroute");
    this->NodeStyle = ECalliopeNodeStyle::Default;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



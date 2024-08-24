#include "BED_GuideNode_Reroute.h"

UBED_GuideNode_Reroute::UBED_GuideNode_Reroute() {
    this->Category = TEXT("Route");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



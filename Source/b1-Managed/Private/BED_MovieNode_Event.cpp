#include "BED_MovieNode_Event.h"
#include "ECalliopeNodeStyle.h"

UBED_MovieNode_Event::UBED_MovieNode_Event() {
    this->Category = TEXT("Event");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}



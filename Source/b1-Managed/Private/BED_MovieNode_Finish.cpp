#include "BED_MovieNode_Finish.h"
#include "ECalliopeNodeStyle.h"

UBED_MovieNode_Finish::UBED_MovieNode_Finish() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
}



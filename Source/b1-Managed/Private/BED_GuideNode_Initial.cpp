#include "BED_GuideNode_Initial.h"
#include "ECalliopeNodeStyle.h"

UBED_GuideNode_Initial::UBED_GuideNode_Initial() {
    this->Category = TEXT("Guide");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}



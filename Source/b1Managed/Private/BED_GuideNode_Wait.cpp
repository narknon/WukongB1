#include "BED_GuideNode_Wait.h"
#include "ECalliopeNodeStyle.h"

UBED_GuideNode_Wait::UBED_GuideNode_Wait() {
    this->Category = TEXT("\x65B0\x624B\x6307\x5F15");
    this->NodeStyle = ECalliopeNodeStyle::Transit;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->WaitSecond = 0;
    this->WaitSecondFloat = 0.00f;
}

FString UBED_GuideNode_Wait::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



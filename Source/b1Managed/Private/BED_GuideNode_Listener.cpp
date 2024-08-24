#include "BED_GuideNode_Listener.h"
#include "ECalliopeNodeStyle.h"

UBED_GuideNode_Listener::UBED_GuideNode_Listener() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("\x65B0\x624B\x6307\x5F15");
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(1);
}

TArray<FName> UBED_GuideNode_Listener::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}



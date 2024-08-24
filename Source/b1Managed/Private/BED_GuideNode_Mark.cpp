#include "BED_GuideNode_Mark.h"

UBED_GuideNode_Mark::UBED_GuideNode_Mark() {
    this->Category = TEXT("\x65B0\x624B\x6307\x5F15");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->GuildGroupId = 0;
    this->IsWaitUntilGuideFinish = false;
}

FString UBED_GuideNode_Mark::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_QuestNode_CustomOutput.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_CustomOutput::UBED_QuestNode_CustomOutput() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
}

FString UBED_QuestNode_CustomOutput::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



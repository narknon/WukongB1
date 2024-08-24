#include "BED_QuestNode_Counter.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_Counter::UBED_QuestNode_Counter() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(3);
    this->OutputPins.AddDefaulted(4);
    this->Goal = 0;
    this->CurrentSum = 0;
}

FString UBED_QuestNode_Counter::GetStatusStringInCS_Implementation() const {
    return TEXT("");
}

FString UBED_QuestNode_Counter::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_QuestNode_TrainDummyResultReport.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_TrainDummyResultReport::UBED_QuestNode_TrainDummyResultReport() {
    this->Category = TEXT("Auto Test");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_TrainDummyResultReport::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



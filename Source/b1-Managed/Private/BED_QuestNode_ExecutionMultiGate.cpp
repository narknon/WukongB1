#include "BED_QuestNode_ExecutionMultiGate.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_ExecutionMultiGate::UBED_QuestNode_ExecutionMultiGate() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(2);
    this->bRandom = false;
    this->bLoop = false;
    this->StartIndex = 0;
}



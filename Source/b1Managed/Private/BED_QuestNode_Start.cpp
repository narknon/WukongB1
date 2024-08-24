#include "BED_QuestNode_Start.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_Start::UBED_QuestNode_Start() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}



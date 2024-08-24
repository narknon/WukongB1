#include "BED_QuestNode_Finish.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_Finish::UBED_QuestNode_Finish() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
}



#include "BED_QuestNode_QueryGameState.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_QueryGameState::UBED_QuestNode_QueryGameState() {
    this->Category = TEXT("Notifies");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(3);
    this->QueryCondition = QueryGameStateCondition::None;
}



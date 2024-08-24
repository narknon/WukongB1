#include "BED_QuestNode_PlayerCondition.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_PlayerCondition::UBED_QuestNode_PlayerCondition() {
    this->Category = TEXT("Auto Test");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(1);
}

void UBED_QuestNode_PlayerCondition::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_QuestNode_PlayerCondition::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



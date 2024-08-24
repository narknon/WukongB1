#include "BED_QuestNode_ObserveOnlineCondition.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_ObserveOnlineCondition::UBED_QuestNode_ObserveOnlineCondition() {
    this->Category = TEXT("Notifies");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(4);
    this->ConditionType = ObserveOnlineConditionType::None;
    this->SuccessLimit = 1;
    this->PlayerCount = 0;
    this->KillMonsterCount = 0;
    this->GainItemCount = 0;
    this->ItemId = 0;
    this->TraceDistance = 0;
    this->EventID = 0;
    this->RandomCount = 0;
    this->bPlayerAsObserveUnit = false;
}

void UBED_QuestNode_ObserveOnlineCondition::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_QuestNode_ObserveOnlineCondition::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_QuestNode_ObserveByCondition.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_ObserveByCondition::UBED_QuestNode_ObserveByCondition() {
    this->Category = TEXT("Notifies");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(4);
    this->ConditionType = ObserveConditionType::None;
    this->SuccessLimit = 1;
    this->UnitState = EBGUUnitState::None;
    this->SimpleState = EBGUSimpleState::Normal;
    this->AttrFloatType = EBGUAttrFloat::None;
    this->CompareOperation = ValueCompareOperations::EqualTo;
    this->CompareValue = 0.00f;
    this->ItemNumOnline = 0;
    this->Reversal = false;
    this->ChallengeLevel = 0;
    this->BuffID = 0;
    this->bPlayerAsObserveUnit = false;
}

void UBED_QuestNode_ObserveByCondition::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_QuestNode_ObserveByCondition::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



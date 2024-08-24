#include "BED_QuestNode_RaiseAwardProbability.h"

UBED_QuestNode_RaiseAwardProbability::UBED_QuestNode_RaiseAwardProbability() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->EventID = 0;
    this->RaiseType = AwardProbabilityRaiseType::None;
    this->Probability = 0;
    this->CanReduce = false;
}

FString UBED_QuestNode_RaiseAwardProbability::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_QuestNode_ChallengeSuccess.h"

UBED_QuestNode_ChallengeSuccess::UBED_QuestNode_ChallengeSuccess() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ChallengeId = 0;
}

FString UBED_QuestNode_ChallengeSuccess::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



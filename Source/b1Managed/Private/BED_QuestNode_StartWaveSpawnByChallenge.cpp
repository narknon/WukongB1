#include "BED_QuestNode_StartWaveSpawnByChallenge.h"

UBED_QuestNode_StartWaveSpawnByChallenge::UBED_QuestNode_StartWaveSpawnByChallenge() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ChallengeId = 0;
    this->NeedPlayMontage = false;
}

FString UBED_QuestNode_StartWaveSpawnByChallenge::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



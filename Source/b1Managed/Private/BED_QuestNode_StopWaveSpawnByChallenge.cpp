#include "BED_QuestNode_StopWaveSpawnByChallenge.h"

UBED_QuestNode_StopWaveSpawnByChallenge::UBED_QuestNode_StopWaveSpawnByChallenge() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ChallengeId = 0;
}

FString UBED_QuestNode_StopWaveSpawnByChallenge::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



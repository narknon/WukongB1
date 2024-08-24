#include "BED_QuestNode_SpawnBossTrace.h"

UBED_QuestNode_SpawnBossTrace::UBED_QuestNode_SpawnBossTrace() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->SpawnType = TraceSpawnType::None;
}

FString UBED_QuestNode_SpawnBossTrace::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_QuestNode_LevelStream.h"

UBED_QuestNode_LevelStream::UBED_QuestNode_LevelStream() {
    this->Category = TEXT("Route");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_LevelStream::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



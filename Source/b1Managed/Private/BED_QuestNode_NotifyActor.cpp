#include "BED_QuestNode_NotifyActor.h"

UBED_QuestNode_NotifyActor::UBED_QuestNode_NotifyActor() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_NotifyActor::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_QuestNode_PostAkEvent.h"

UBED_QuestNode_PostAkEvent::UBED_QuestNode_PostAkEvent() {
    this->Category = TEXT("Gameplay");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_PostAkEvent::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



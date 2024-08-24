#include "BED_QuestNode_PlayDBCEfxToInteract.h"

UBED_QuestNode_PlayDBCEfxToInteract::UBED_QuestNode_PlayDBCEfxToInteract() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_PlayDBCEfxToInteract::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



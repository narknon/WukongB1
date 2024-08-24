#include "BED_MovieNode_PerformerPostEvent.h"

UBED_MovieNode_PerformerPostEvent::UBED_MovieNode_PerformerPostEvent() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->AkEvent = NULL;
    this->Follow = false;
}

FString UBED_MovieNode_PerformerPostEvent::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



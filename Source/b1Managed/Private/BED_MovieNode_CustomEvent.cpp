#include "BED_MovieNode_CustomEvent.h"
#include "ECalliopeNodeStyle.h"

UBED_MovieNode_CustomEvent::UBED_MovieNode_CustomEvent() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}

FString UBED_MovieNode_CustomEvent::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_MovieNode_PlayerSetCloudMoveEnabled.h"

UBED_MovieNode_PlayerSetCloudMoveEnabled::UBED_MovieNode_PlayerSetCloudMoveEnabled() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bIsEnabled = false;
}

FString UBED_MovieNode_PlayerSetCloudMoveEnabled::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



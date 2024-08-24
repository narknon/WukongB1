#include "BED_MovieNode_LoadOrUnloadStreamingLevel.h"

UBED_MovieNode_LoadOrUnloadStreamingLevel::UBED_MovieNode_LoadOrUnloadStreamingLevel() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bLoadOrUnload = true;
}

FString UBED_MovieNode_LoadOrUnloadStreamingLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



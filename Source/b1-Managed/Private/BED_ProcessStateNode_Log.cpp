#include "BED_ProcessStateNode_Log.h"

UBED_ProcessStateNode_Log::UBED_ProcessStateNode_Log() {
    this->Category = TEXT("Utils");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->Message = TEXT("Log!");
    this->bPrintToScreen = true;
    this->Duration = 5.00f;
}

FString UBED_ProcessStateNode_Log::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



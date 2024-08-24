#include "BED_ProcessStateNode_ResetDetect.h"

UBED_ProcessStateNode_ResetDetect::UBED_ProcessStateNode_ResetDetect() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Detect");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_ProcessStateNode_ResetDetect::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ProcessStateNode_ResetDetect::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_ProcessStateNode_ResetDetect::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



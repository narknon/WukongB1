#include "BED_ProcessStateNode_EnableDetect.h"

UBED_ProcessStateNode_EnableDetect::UBED_ProcessStateNode_EnableDetect() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Detect");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_ProcessStateNode_EnableDetect::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ProcessStateNode_EnableDetect::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_ProcessStateNode_EnableDetect::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



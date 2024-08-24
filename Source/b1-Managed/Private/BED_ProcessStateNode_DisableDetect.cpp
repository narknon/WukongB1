#include "BED_ProcessStateNode_DisableDetect.h"

UBED_ProcessStateNode_DisableDetect::UBED_ProcessStateNode_DisableDetect() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Detect");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_ProcessStateNode_DisableDetect::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ProcessStateNode_DisableDetect::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_ProcessStateNode_DisableDetect::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



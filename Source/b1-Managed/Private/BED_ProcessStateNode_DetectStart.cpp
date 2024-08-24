#include "BED_ProcessStateNode_DetectStart.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_DetectStart::UBED_ProcessStateNode_DetectStart() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Detect");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(2);
}

void UBED_ProcessStateNode_DetectStart::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ProcessStateNode_DetectStart::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_ProcessStateNode_DetectStart::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



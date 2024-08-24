#include "BED_ProcessStateNode_NotifySelf.h"

UBED_ProcessStateNode_NotifySelf::UBED_ProcessStateNode_NotifySelf() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Notify");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_ProcessStateNode_NotifySelf::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ProcessStateNode_NotifySelf::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_ProcessStateNode_NotifySelf::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



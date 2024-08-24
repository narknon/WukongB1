#include "BED_ComboNode_State.h"
#include "ECalliopeNodeStyle.h"

UBED_ComboNode_State::UBED_ComboNode_State() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("General");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
}

void UBED_ComboNode_State::PostLoadInCS_Implementation() {
}

void UBED_ComboNode_State::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ComboNode_State::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}



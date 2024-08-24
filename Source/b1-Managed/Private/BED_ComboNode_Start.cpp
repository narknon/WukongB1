#include "BED_ComboNode_Start.h"
#include "ECalliopeNodeStyle.h"

UBED_ComboNode_Start::UBED_ComboNode_Start() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
}

void UBED_ComboNode_Start::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ComboNode_Start::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}



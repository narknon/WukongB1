#include "BED_ComboNode_Condition.h"
#include "ECalliopeNodeStyle.h"

UBED_ComboNode_Condition::UBED_ComboNode_Condition() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("General");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(1);
}

void UBED_ComboNode_Condition::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ComboNode_Condition::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}



#include "BED_StateNode_CustomEnter.h"

UBED_StateNode_CustomEnter::UBED_StateNode_CustomEnter() {
    this->Category = TEXT("Notifies");
}

TArray<FName> UBED_StateNode_CustomEnter::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}



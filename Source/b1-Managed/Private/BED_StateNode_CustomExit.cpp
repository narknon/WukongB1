#include "BED_StateNode_CustomExit.h"

UBED_StateNode_CustomExit::UBED_StateNode_CustomExit() {
    this->Category = TEXT("Notifies");
}

TArray<FName> UBED_StateNode_CustomExit::GetContextInputsInCS_Implementation() {
    return TArray<FName>();
}



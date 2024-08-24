#include "BED_ProcessMachineNode_Battle.h"

UBED_ProcessMachineNode_Battle::UBED_ProcessMachineNode_Battle() {
    this->InputPins.AddDefaulted(1);
}

TArray<FName> UBED_ProcessMachineNode_Battle::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}



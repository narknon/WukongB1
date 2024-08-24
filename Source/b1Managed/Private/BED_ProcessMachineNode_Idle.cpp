#include "BED_ProcessMachineNode_Idle.h"

UBED_ProcessMachineNode_Idle::UBED_ProcessMachineNode_Idle() {
    this->InputPins.AddDefaulted(1);
    this->bUseResetPin = false;
}

void UBED_ProcessMachineNode_Idle::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ProcessMachineNode_Idle::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}



#include "BED_ProcessMachineNode_State.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_State::UBED_ProcessMachineNode_State() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Machine Nodes");
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_ProcessMachineNode_State::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ProcessMachineNode_State::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_ProcessMachineNode_State::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}

bool UBED_ProcessMachineNode_State::GetBranchGraphToEditInCS_Implementation(FString& OutBranchGraphIdentifier) {
    return false;
}



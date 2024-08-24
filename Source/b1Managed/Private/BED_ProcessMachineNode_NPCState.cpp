#include "BED_ProcessMachineNode_NPCState.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_NPCState::UBED_ProcessMachineNode_NPCState() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Machine Nodes");
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(1);
}

void UBED_ProcessMachineNode_NPCState::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ProcessMachineNode_NPCState::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_ProcessMachineNode_NPCState::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}

bool UBED_ProcessMachineNode_NPCState::GetBranchGraphToEditInCS_Implementation(FString& OutBranchGraphIdentifier) {
    return false;
}



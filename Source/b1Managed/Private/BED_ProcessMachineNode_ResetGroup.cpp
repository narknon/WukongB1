#include "BED_ProcessMachineNode_ResetGroup.h"

UBED_ProcessMachineNode_ResetGroup::UBED_ProcessMachineNode_ResetGroup() {
    this->Category = TEXT("\x9AD8\x7EA7");
    this->InputPins.AddDefaulted(1);
}

void UBED_ProcessMachineNode_ResetGroup::OnRefreshAssetInCS_Implementation() const {
}

TArray<FName> UBED_ProcessMachineNode_ResetGroup::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_ProcessMachineNode_ResetGroup::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



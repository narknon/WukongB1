#include "BED_ProcessMachineNode_GroupStart.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_GroupStart::UBED_ProcessMachineNode_GroupStart() {
    this->Category = TEXT("\x9AD8\x7EA7");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}

FString UBED_ProcessMachineNode_GroupStart::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



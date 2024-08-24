#include "BED_ProcessMachineNode_SaveArchive.h"

UBED_ProcessMachineNode_SaveArchive::UBED_ProcessMachineNode_SaveArchive() {
    this->bSupportsContextPins = false;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_ProcessMachineNode_SaveArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



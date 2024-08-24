#include "BED_ProcessMachineNode_ReportOSS.h"

UBED_ProcessMachineNode_ReportOSS::UBED_ProcessMachineNode_ReportOSS() {
    this->bSupportsContextPins = false;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_ProcessMachineNode_ReportOSS::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



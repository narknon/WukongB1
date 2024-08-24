#include "BED_ProcessMachineNode_TemplateBase.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_TemplateBase::UBED_ProcessMachineNode_TemplateBase() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("\x57FA\x7840");
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

TArray<FName> UBED_ProcessMachineNode_TemplateBase::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}



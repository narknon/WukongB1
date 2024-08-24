#include "BED_FSMNode_Condition_GI_Loading_HasArchiveIdInContext.h"

UBED_FSMNode_Condition_GI_Loading_HasArchiveIdInContext::UBED_FSMNode_Condition_GI_Loading_HasArchiveIdInContext() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_HasArchiveIdInContext::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



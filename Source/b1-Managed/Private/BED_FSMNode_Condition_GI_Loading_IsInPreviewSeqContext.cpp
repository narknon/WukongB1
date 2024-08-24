#include "BED_FSMNode_Condition_GI_Loading_IsInPreviewSeqContext.h"

UBED_FSMNode_Condition_GI_Loading_IsInPreviewSeqContext::UBED_FSMNode_Condition_GI_Loading_IsInPreviewSeqContext() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInPreviewSeqContext::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



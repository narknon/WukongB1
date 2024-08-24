#include "BED_FSMNode_Condition_GI_Loading_IsDriverVersionMismatch.h"

UBED_FSMNode_Condition_GI_Loading_IsDriverVersionMismatch::UBED_FSMNode_Condition_GI_Loading_IsDriverVersionMismatch() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsDriverVersionMismatch::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_FSMNode_Condition_GI_Loading_IsNeedPreStartGameProcess.h"

UBED_FSMNode_Condition_GI_Loading_IsNeedPreStartGameProcess::UBED_FSMNode_Condition_GI_Loading_IsNeedPreStartGameProcess() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsNeedPreStartGameProcess::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_FSMNode_Condition_GI_Loading_IsNeedResetGameInstanceData.h"

UBED_FSMNode_Condition_GI_Loading_IsNeedResetGameInstanceData::UBED_FSMNode_Condition_GI_Loading_IsNeedResetGameInstanceData() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsNeedResetGameInstanceData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


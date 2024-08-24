#include "BED_FSMNode_Condition_GI_Loading_BattleLevelTravelNeedWaitCameraBlend.h"

UBED_FSMNode_Condition_GI_Loading_BattleLevelTravelNeedWaitCameraBlend::UBED_FSMNode_Condition_GI_Loading_BattleLevelTravelNeedWaitCameraBlend() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_BattleLevelTravelNeedWaitCameraBlend::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_FSMNode_Condition_GI_Loading_CheckGlobalTravelMode.h"

UBED_FSMNode_Condition_GI_Loading_CheckGlobalTravelMode::UBED_FSMNode_Condition_GI_Loading_CheckGlobalTravelMode() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(4);
}

FString UBED_FSMNode_Condition_GI_Loading_CheckGlobalTravelMode::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



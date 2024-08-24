#include "BED_FSMNode_Condition_GI_Loading_CheckGMFlagsSupportUnknownTravel.h"

UBED_FSMNode_Condition_GI_Loading_CheckGMFlagsSupportUnknownTravel::UBED_FSMNode_Condition_GI_Loading_CheckGMFlagsSupportUnknownTravel() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_CheckGMFlagsSupportUnknownTravel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_FSMNode_Condition_GI_Loading_TravelUrlHasHost.h"

UBED_FSMNode_Condition_GI_Loading_TravelUrlHasHost::UBED_FSMNode_Condition_GI_Loading_TravelUrlHasHost() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_TravelUrlHasHost::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



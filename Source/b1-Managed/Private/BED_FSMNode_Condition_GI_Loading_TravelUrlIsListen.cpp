#include "BED_FSMNode_Condition_GI_Loading_TravelUrlIsListen.h"

UBED_FSMNode_Condition_GI_Loading_TravelUrlIsListen::UBED_FSMNode_Condition_GI_Loading_TravelUrlIsListen() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_TravelUrlIsListen::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



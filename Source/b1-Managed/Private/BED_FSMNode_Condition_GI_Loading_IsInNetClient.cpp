#include "BED_FSMNode_Condition_GI_Loading_IsInNetClient.h"

UBED_FSMNode_Condition_GI_Loading_IsInNetClient::UBED_FSMNode_Condition_GI_Loading_IsInNetClient() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInNetClient::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



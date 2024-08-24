#include "BED_FSMNode_Condition_GI_Loading_IsInPIEClient.h"

UBED_FSMNode_Condition_GI_Loading_IsInPIEClient::UBED_FSMNode_Condition_GI_Loading_IsInPIEClient() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInPIEClient::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



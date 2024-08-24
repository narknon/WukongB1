#include "BED_FSMNode_Condition_GI_Loading_IsInListenServer.h"

UBED_FSMNode_Condition_GI_Loading_IsInListenServer::UBED_FSMNode_Condition_GI_Loading_IsInListenServer() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInListenServer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



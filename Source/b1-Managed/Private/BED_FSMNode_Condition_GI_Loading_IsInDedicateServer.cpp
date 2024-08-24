#include "BED_FSMNode_Condition_GI_Loading_IsInDedicateServer.h"

UBED_FSMNode_Condition_GI_Loading_IsInDedicateServer::UBED_FSMNode_Condition_GI_Loading_IsInDedicateServer() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInDedicateServer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_FSMNode_Condition_GI_Loading_IsInServer.h"

UBED_FSMNode_Condition_GI_Loading_IsInServer::UBED_FSMNode_Condition_GI_Loading_IsInServer() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInServer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



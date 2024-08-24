#include "BED_FSMNode_GI_Global_SubG_GI_Loading_ToiletDedicateServer.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletDedicateServer::UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletDedicateServer() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletDedicateServer::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletDedicateServer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



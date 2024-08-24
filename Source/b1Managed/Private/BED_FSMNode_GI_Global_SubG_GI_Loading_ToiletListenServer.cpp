#include "BED_FSMNode_GI_Global_SubG_GI_Loading_ToiletListenServer.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletListenServer::UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletListenServer() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletListenServer::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletListenServer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



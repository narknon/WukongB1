#include "BED_FSMNode_GI_Global_SubG_GI_Loading_PartyRoomServer.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_PartyRoomServer::UBED_FSMNode_GI_Global_SubG_GI_Loading_PartyRoomServer() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_PartyRoomServer::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_PartyRoomServer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


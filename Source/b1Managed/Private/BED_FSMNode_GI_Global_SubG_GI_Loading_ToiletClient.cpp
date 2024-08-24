#include "BED_FSMNode_GI_Global_SubG_GI_Loading_ToiletClient.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletClient::UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletClient() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletClient::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletClient::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



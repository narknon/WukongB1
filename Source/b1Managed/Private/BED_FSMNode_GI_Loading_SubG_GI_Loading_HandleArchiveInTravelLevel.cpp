#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_HandleArchiveInTravelLevel.h"

UBED_FSMNode_GI_Loading_SubG_GI_Loading_HandleArchiveInTravelLevel::UBED_FSMNode_GI_Loading_SubG_GI_Loading_HandleArchiveInTravelLevel() {
    this->Category = TEXT("GI_Loading SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SubG_GI_Loading_HandleArchiveInTravelLevel::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Loading_SubG_GI_Loading_HandleArchiveInTravelLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



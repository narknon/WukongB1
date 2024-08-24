#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_ResetGameInstanceDataAndSaveArchive.h"

UBED_FSMNode_GI_Loading_SubG_GI_Loading_ResetGameInstanceDataAndSaveArchive::UBED_FSMNode_GI_Loading_SubG_GI_Loading_ResetGameInstanceDataAndSaveArchive() {
    this->Category = TEXT("GI_Loading SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SubG_GI_Loading_ResetGameInstanceDataAndSaveArchive::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Loading_SubG_GI_Loading_ResetGameInstanceDataAndSaveArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



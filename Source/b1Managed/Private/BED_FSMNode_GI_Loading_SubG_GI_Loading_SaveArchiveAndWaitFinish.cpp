#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_SaveArchiveAndWaitFinish.h"

UBED_FSMNode_GI_Loading_SubG_GI_Loading_SaveArchiveAndWaitFinish::UBED_FSMNode_GI_Loading_SubG_GI_Loading_SaveArchiveAndWaitFinish() {
    this->Category = TEXT("GI_Loading SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ArchiveSaveSource = (ArchiveSaveSource)0;
}

void UBED_FSMNode_GI_Loading_SubG_GI_Loading_SaveArchiveAndWaitFinish::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Loading_SubG_GI_Loading_SaveArchiveAndWaitFinish::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



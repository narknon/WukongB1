#include "BED_FSMNode_GI_Global_SubG_GI_Loading_PreviewSequence.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_PreviewSequence::UBED_FSMNode_GI_Global_SubG_GI_Loading_PreviewSequence() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_PreviewSequence::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_PreviewSequence::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



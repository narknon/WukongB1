#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_PreEnterLevel.h"

UBED_FSMNode_GI_Loading_SubG_GI_Loading_PreEnterLevel::UBED_FSMNode_GI_Loading_SubG_GI_Loading_PreEnterLevel() {
    this->Category = TEXT("GI_Loading SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SubG_GI_Loading_PreEnterLevel::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Loading_SubG_GI_Loading_PreEnterLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



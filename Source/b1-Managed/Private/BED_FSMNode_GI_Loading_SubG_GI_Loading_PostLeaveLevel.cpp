#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_PostLeaveLevel.h"

UBED_FSMNode_GI_Loading_SubG_GI_Loading_PostLeaveLevel::UBED_FSMNode_GI_Loading_SubG_GI_Loading_PostLeaveLevel() {
    this->Category = TEXT("GI_Loading SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SubG_GI_Loading_PostLeaveLevel::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Loading_SubG_GI_Loading_PostLeaveLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_FSMNode_GI_Global_SubG_GI_Loading_TravelToNextChapter.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelToNextChapter::UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelToNextChapter() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelToNextChapter::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelToNextChapter::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


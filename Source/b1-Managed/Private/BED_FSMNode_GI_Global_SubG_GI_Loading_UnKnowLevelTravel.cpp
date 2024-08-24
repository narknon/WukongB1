#include "BED_FSMNode_GI_Global_SubG_GI_Loading_UnKnowLevelTravel.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_UnKnowLevelTravel::UBED_FSMNode_GI_Global_SubG_GI_Loading_UnKnowLevelTravel() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(5);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_UnKnowLevelTravel::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_UnKnowLevelTravel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



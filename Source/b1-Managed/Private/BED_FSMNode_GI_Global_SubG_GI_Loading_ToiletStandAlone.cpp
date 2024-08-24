#include "BED_FSMNode_GI_Global_SubG_GI_Loading_ToiletStandAlone.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletStandAlone::UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletStandAlone() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletStandAlone::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_ToiletStandAlone::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



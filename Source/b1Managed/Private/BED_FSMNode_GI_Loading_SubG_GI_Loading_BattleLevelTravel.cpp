#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_BattleLevelTravel.h"

UBED_FSMNode_GI_Loading_SubG_GI_Loading_BattleLevelTravel::UBED_FSMNode_GI_Loading_SubG_GI_Loading_BattleLevelTravel() {
    this->Category = TEXT("GI_Loading SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->NeedWaitCameraBlend = false;
}

void UBED_FSMNode_GI_Loading_SubG_GI_Loading_BattleLevelTravel::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Loading_SubG_GI_Loading_BattleLevelTravel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



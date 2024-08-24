#include "BED_FSMNode_Condition_GI_Loading_TeleportNeedLevelTravel.h"

UBED_FSMNode_Condition_GI_Loading_TeleportNeedLevelTravel::UBED_FSMNode_Condition_GI_Loading_TeleportNeedLevelTravel() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_TeleportNeedLevelTravel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



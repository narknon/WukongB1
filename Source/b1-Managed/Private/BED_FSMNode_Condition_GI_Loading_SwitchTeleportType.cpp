#include "BED_FSMNode_Condition_GI_Loading_SwitchTeleportType.h"

UBED_FSMNode_Condition_GI_Loading_SwitchTeleportType::UBED_FSMNode_Condition_GI_Loading_SwitchTeleportType() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(4);
}

FString UBED_FSMNode_Condition_GI_Loading_SwitchTeleportType::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



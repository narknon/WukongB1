#include "BED_FSMNode_Condition_GI_Loading_IsInToilet.h"

UBED_FSMNode_Condition_GI_Loading_IsInToilet::UBED_FSMNode_Condition_GI_Loading_IsInToilet() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInToilet::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



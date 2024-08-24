#include "BED_FSMNode_Condition_GI_Loading_OpenSeamlessLevelTravel.h"

UBED_FSMNode_Condition_GI_Loading_OpenSeamlessLevelTravel::UBED_FSMNode_Condition_GI_Loading_OpenSeamlessLevelTravel() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_OpenSeamlessLevelTravel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



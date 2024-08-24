#include "BED_FSMNode_Condition_GI_Loading_DetermineTravelLevelByHandlingArchive.h"

UBED_FSMNode_Condition_GI_Loading_DetermineTravelLevelByHandlingArchive::UBED_FSMNode_Condition_GI_Loading_DetermineTravelLevelByHandlingArchive() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(4);
}

FString UBED_FSMNode_Condition_GI_Loading_DetermineTravelLevelByHandlingArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



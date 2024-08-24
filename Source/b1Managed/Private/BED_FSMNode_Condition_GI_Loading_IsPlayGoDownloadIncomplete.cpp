#include "BED_FSMNode_Condition_GI_Loading_IsPlayGoDownloadIncomplete.h"

UBED_FSMNode_Condition_GI_Loading_IsPlayGoDownloadIncomplete::UBED_FSMNode_Condition_GI_Loading_IsPlayGoDownloadIncomplete() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsPlayGoDownloadIncomplete::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



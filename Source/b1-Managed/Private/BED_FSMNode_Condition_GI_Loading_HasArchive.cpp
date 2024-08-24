#include "BED_FSMNode_Condition_GI_Loading_HasArchive.h"

UBED_FSMNode_Condition_GI_Loading_HasArchive::UBED_FSMNode_Condition_GI_Loading_HasArchive() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_HasArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



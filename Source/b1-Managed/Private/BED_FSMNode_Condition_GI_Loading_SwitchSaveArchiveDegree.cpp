#include "BED_FSMNode_Condition_GI_Loading_SwitchSaveArchiveDegree.h"

UBED_FSMNode_Condition_GI_Loading_SwitchSaveArchiveDegree::UBED_FSMNode_Condition_GI_Loading_SwitchSaveArchiveDegree() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(4);
}

FString UBED_FSMNode_Condition_GI_Loading_SwitchSaveArchiveDegree::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



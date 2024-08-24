#include "BED_FSMNode_Condition_GI_Loading_SwitchFillContextArchiveDataType.h"

UBED_FSMNode_Condition_GI_Loading_SwitchFillContextArchiveDataType::UBED_FSMNode_Condition_GI_Loading_SwitchFillContextArchiveDataType() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(3);
}

FString UBED_FSMNode_Condition_GI_Loading_SwitchFillContextArchiveDataType::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_FSMNode_Condition_GI_Loading_HasPlayerLoginBtlSvr.h"

UBED_FSMNode_Condition_GI_Loading_HasPlayerLoginBtlSvr::UBED_FSMNode_Condition_GI_Loading_HasPlayerLoginBtlSvr() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_HasPlayerLoginBtlSvr::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



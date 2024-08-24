#include "BED_FSMNode_GI_Loading_GMRecordRebirthPos.h"

UBED_FSMNode_GI_Loading_GMRecordRebirthPos::UBED_FSMNode_GI_Loading_GMRecordRebirthPos() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GMRecordRebirthPos::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GMRecordRebirthPos::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



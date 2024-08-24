#include "BED_FSMNode_GI_Global_WaittingSelectLevel820Demo.h"

UBED_FSMNode_GI_Global_WaittingSelectLevel820Demo::UBED_FSMNode_GI_Global_WaittingSelectLevel820Demo() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_WaittingSelectLevel820Demo::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_WaittingSelectLevel820Demo::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



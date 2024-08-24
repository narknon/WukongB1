#include "BED_FSMNode_GI_Loading_GSGRecoverMuseum.h"

UBED_FSMNode_GI_Loading_GSGRecoverMuseum::UBED_FSMNode_GI_Loading_GSGRecoverMuseum() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGRecoverMuseum::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGRecoverMuseum::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



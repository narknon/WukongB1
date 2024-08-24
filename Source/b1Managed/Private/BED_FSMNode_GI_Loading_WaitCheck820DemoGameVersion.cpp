#include "BED_FSMNode_GI_Loading_WaitCheck820DemoGameVersion.h"

UBED_FSMNode_GI_Loading_WaitCheck820DemoGameVersion::UBED_FSMNode_GI_Loading_WaitCheck820DemoGameVersion() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitCheck820DemoGameVersion::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitCheck820DemoGameVersion::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



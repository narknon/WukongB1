#include "BED_FSMNode_GI_Loading_TriggerTeleportAndWaitFinish.h"

UBED_FSMNode_GI_Loading_TriggerTeleportAndWaitFinish::UBED_FSMNode_GI_Loading_TriggerTeleportAndWaitFinish() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_TriggerTeleportAndWaitFinish::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_TriggerTeleportAndWaitFinish::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



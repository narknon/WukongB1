#include "BED_FSMNode_GI_Loading_TeleportTemplateBegin.h"

UBED_FSMNode_GI_Loading_TeleportTemplateBegin::UBED_FSMNode_GI_Loading_TeleportTemplateBegin() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_TeleportTemplateBegin::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_TeleportTemplateBegin::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_FSMNode_GI_Loading_TeleportTemplateEnd.h"

UBED_FSMNode_GI_Loading_TeleportTemplateEnd::UBED_FSMNode_GI_Loading_TeleportTemplateEnd() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_TeleportTemplateEnd::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_TeleportTemplateEnd::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



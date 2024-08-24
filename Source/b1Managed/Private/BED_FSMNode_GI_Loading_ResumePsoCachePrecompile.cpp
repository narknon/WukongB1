#include "BED_FSMNode_GI_Loading_ResumePsoCachePrecompile.h"

UBED_FSMNode_GI_Loading_ResumePsoCachePrecompile::UBED_FSMNode_GI_Loading_ResumePsoCachePrecompile() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ResumePsoCachePrecompile::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ResumePsoCachePrecompile::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



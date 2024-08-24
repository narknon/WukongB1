#include "BED_FSMNode_GI_Loading_PausePsoCachePrecompile.h"

UBED_FSMNode_GI_Loading_PausePsoCachePrecompile::UBED_FSMNode_GI_Loading_PausePsoCachePrecompile() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_PausePsoCachePrecompile::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_PausePsoCachePrecompile::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



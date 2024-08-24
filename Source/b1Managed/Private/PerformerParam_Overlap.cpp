#include "PerformerParam_Overlap.h"
#include "PerformerParamType.h"

UPerformerParam_Overlap::UPerformerParam_Overlap() {
    this->ParamType = PerformerParamType::Overlap;
}

void UPerformerParam_Overlap::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}



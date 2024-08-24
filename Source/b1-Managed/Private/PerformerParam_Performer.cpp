#include "PerformerParam_Performer.h"
#include "PerformerParamType.h"

UPerformerParam_Performer::UPerformerParam_Performer() {
    this->ParamType = PerformerParamType::Performer;
}

void UPerformerParam_Performer::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}



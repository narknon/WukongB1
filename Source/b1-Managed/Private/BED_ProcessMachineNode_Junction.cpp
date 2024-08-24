#include "BED_ProcessMachineNode_Junction.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_Junction::UBED_ProcessMachineNode_Junction() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Machine Operators");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
}

bool UBED_ProcessMachineNode_Junction::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

void UBED_ProcessMachineNode_Junction::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_ProcessMachineNode_Junction::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_ProcessMachineNode_Junction::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



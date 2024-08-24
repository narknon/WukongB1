#include "BED_TaskNode_ObserveUnitsDeadWithOrder.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_ObserveUnitsDeadWithOrder::UBED_TaskNode_ObserveUnitsDeadWithOrder() {
    this->Category = TEXT("Observe");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
}

void UBED_TaskNode_ObserveUnitsDeadWithOrder::OnRefreshAssetInCS_Implementation() const {
}

void UBED_TaskNode_ObserveUnitsDeadWithOrder::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_TaskNode_ObserveUnitsDeadWithOrder::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



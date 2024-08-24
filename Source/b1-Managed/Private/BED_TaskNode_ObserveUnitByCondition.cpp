#include "BED_TaskNode_ObserveUnitByCondition.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_ObserveUnitByCondition::UBED_TaskNode_ObserveUnitByCondition() {
    this->Category = TEXT("Observe");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(4);
    this->SuccessLimit = 1;
}

void UBED_TaskNode_ObserveUnitByCondition::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_TaskNode_ObserveUnitByCondition::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



#include "BED_FSMNode_GI_Global_WaitGameStart.h"

UBED_FSMNode_GI_Global_WaitGameStart::UBED_FSMNode_GI_Global_WaitGameStart() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_WaitGameStart::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_WaitGameStart::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



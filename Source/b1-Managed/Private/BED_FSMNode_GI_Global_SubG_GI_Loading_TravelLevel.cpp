#include "BED_FSMNode_GI_Global_SubG_GI_Loading_TravelLevel.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelLevel::UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelLevel() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->TravelLevelType = GlobalTravelLevelType::None;
    this->TargetLevelNetType = TargetLevelNetType::MainMenu;
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelLevel::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_TravelLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



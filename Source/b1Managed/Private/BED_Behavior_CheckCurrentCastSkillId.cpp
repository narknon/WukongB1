#include "BED_Behavior_CheckCurrentCastSkillId.h"
#include "ECalliopeNodeStyle.h"

UBED_Behavior_CheckCurrentCastSkillId::UBED_Behavior_CheckCurrentCastSkillId() {
    this->Category = TEXT("Condition");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(1);
}

void UBED_Behavior_CheckCurrentCastSkillId::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}



#include "BED_QuestNode_PlayerCastSkill.h"

UBED_QuestNode_PlayerCastSkill::UBED_QuestNode_PlayerCastSkill() {
    this->Category = TEXT("Auto Test");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ComboKey = EBGUAutoTestPlayerComboKey::None;
    this->Direction = SkillDirection::None;
    this->SkillID = 0;
}

void UBED_QuestNode_PlayerCastSkill::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_QuestNode_PlayerCastSkill::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



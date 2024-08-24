#include "BED_QuestNode_PlayerCastMagic.h"

UBED_QuestNode_PlayerCastMagic::UBED_QuestNode_PlayerCastMagic() {
    this->Category = TEXT("Auto Test");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->CastType = EBGUAutoTestPlayerMagicType::None;
    this->Direction = SkillDirection::None;
}

FString UBED_QuestNode_PlayerCastMagic::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



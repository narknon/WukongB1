#include "BED_QuestNode_UnitTeleport.h"

UBED_QuestNode_UnitTeleport::UBED_QuestNode_UnitTeleport() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->SkillBeforeTeleport = 0;
    this->SkillAfterTeleport = 0;
    this->LocationType = TeleportLocationType::None;
    this->RotationType = 0;
}

FString UBED_QuestNode_UnitTeleport::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



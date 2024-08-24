#include "BED_FSMNode_Condition_GI_Loading_MonsterTeleportArchiveExist.h"

UBED_FSMNode_Condition_GI_Loading_MonsterTeleportArchiveExist::UBED_FSMNode_Condition_GI_Loading_MonsterTeleportArchiveExist() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_MonsterTeleportArchiveExist::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



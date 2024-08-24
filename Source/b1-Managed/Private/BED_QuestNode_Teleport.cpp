#include "BED_QuestNode_Teleport.h"

UBED_QuestNode_Teleport::UBED_QuestNode_Teleport() {
    this->Category = TEXT("Gameplay");
    this->InputPins.AddDefaulted(1);
    this->bTeleportToOtherLevel = false;
    this->TargetLevelID = -1;
    this->TargetRebirthPointId = -1;
    this->bDropTeleportPoint = false;
    this->bSaveArchiveAfterTeleport = true;
    this->bDontResetPlayerState = false;
    this->LoadingScreenType = EGSLoadingScreenType::FullBlack;
}

FString UBED_QuestNode_Teleport::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



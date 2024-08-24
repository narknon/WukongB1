#include "BED_ProcessStateNode_PlayLevelSequence.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_PlayLevelSequence::UBED_ProcessStateNode_PlayLevelSequence() {
    this->Category = TEXT("World");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(5);
    this->SequenceID = 0;
    this->bUsePlayerCamera = false;
    this->StartTime = 0.00f;
    this->bTriggerTransBack = true;
    this->bTriggerMonsterGoHome = true;
    this->bDisableMovementInput = true;
    this->bDisableLookAtInput = true;
    this->bUseCrane = false;
    this->bUseRail = false;
    this->bHidePlayer = false;
    this->bHideHud = true;
    this->bDisableCameraCuts = false;
}

FString UBED_ProcessStateNode_PlayLevelSequence::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



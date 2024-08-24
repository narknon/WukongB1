#include "BED_ProcessMachineNode_Story.h"

UBED_ProcessMachineNode_Story::UBED_ProcessMachineNode_Story() {
    this->bSupportsContextPins = false;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->MatchPositionType = SequenceBlendInMatchPositionType::None;
    this->bWaitPlayFinish = true;
    this->SequenceID = 0;
    this->bGainItemWhenFinish = false;
    this->bChapterEndStory = false;
    this->ChapterID = 0;
    this->bTriggerTransBack = true;
    this->bTriggerMonsterGoHome = true;
    this->bDisablePlayerControl = true;
    this->bDisableMovementInput = true;
    this->bDisableLookAtInput = true;
    this->bHidePlayer = false;
    this->bHideHud = true;
}

FString UBED_ProcessMachineNode_Story::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



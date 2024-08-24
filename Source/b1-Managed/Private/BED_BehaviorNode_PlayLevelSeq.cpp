#include "BED_BehaviorNode_PlayLevelSeq.h"

UBED_BehaviorNode_PlayLevelSeq::UBED_BehaviorNode_PlayLevelSeq() {
    this->InputPins.AddDefaulted(1);
    this->SequenceID = 0;
    this->UsePlayerCamera = false;
    this->StartTime = 0.00f;
    this->IsDisableMovementInput = false;
    this->IsDisableLookAtInput = false;
    this->IsHideHud = false;
    this->IsDisableCameraCuts = false;
}

FString UBED_BehaviorNode_PlayLevelSeq::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



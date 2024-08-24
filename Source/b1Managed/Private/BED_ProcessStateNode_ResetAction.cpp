#include "BED_ProcessStateNode_ResetAction.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_ResetAction::UBED_ProcessStateNode_ResetAction() {
    this->Category = TEXT("Input");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
    this->bOverride = true;
}



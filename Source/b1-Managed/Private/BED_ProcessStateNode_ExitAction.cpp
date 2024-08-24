#include "BED_ProcessStateNode_ExitAction.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_ExitAction::UBED_ProcessStateNode_ExitAction() {
    this->Category = TEXT("Input");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
    this->bOverride = true;
}



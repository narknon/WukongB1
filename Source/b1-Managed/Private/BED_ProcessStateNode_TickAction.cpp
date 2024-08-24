#include "BED_ProcessStateNode_TickAction.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_TickAction::UBED_ProcessStateNode_TickAction() {
    this->Category = TEXT("Input");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
    this->bOverride = true;
}



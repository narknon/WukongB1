#include "BED_ProcessStateNode_EnterAction.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_EnterAction::UBED_ProcessStateNode_EnterAction() {
    this->Category = TEXT("Input");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
    this->bOverride = true;
}



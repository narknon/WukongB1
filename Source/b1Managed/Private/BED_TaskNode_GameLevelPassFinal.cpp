#include "BED_TaskNode_GameLevelPassFinal.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_GameLevelPassFinal::UBED_TaskNode_GameLevelPassFinal() {
    this->Category = TEXT("Gameplay");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



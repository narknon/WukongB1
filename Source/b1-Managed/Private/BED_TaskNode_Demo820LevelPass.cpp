#include "BED_TaskNode_Demo820LevelPass.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_Demo820LevelPass::UBED_TaskNode_Demo820LevelPass() {
    this->Category = TEXT("Gameplay");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



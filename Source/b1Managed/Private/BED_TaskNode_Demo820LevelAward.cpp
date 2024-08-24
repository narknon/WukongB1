#include "BED_TaskNode_Demo820LevelAward.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_Demo820LevelAward::UBED_TaskNode_Demo820LevelAward() {
    this->Category = TEXT("Gameplay");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



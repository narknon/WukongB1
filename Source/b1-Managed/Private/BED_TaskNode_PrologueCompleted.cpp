#include "BED_TaskNode_PrologueCompleted.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_PrologueCompleted::UBED_TaskNode_PrologueCompleted() {
    this->Category = TEXT("Gameplay");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}



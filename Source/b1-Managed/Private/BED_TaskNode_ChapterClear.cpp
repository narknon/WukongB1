#include "BED_TaskNode_ChapterClear.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_ChapterClear::UBED_TaskNode_ChapterClear() {
    this->Category = TEXT("Gameplay");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ChapterID = 0;
}



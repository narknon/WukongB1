#include "AnimSequenceInfo.h"

FAnimSequenceInfo::FAnimSequenceInfo() {
    this->bEnabled = false;
    this->AnimSequence = NULL;
    this->bLooping = false;
    this->bUseCustomRange = false;
    this->StartFrame = 0;
    this->EndFrame = 0;
}


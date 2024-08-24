#include "AnimNotifyEventSimple.h"

FAnimNotifyEventSimple::FAnimNotifyEventSimple() {
    this->StartTime = 0.00f;
    this->Duration = 0.00f;
    this->Notify = NULL;
    this->NotifyStateClass = NULL;
    this->TrackIndex = 0;
}


#include "BANS_GSAutoCheckBlock.h"

UBANS_GSAutoCheckBlock::UBANS_GSAutoCheckBlock() {
    this->BlockInfoConfig = NULL;
    this->TriggerResetBlockCounterWhenEnd = true;
}

void UBANS_GSAutoCheckBlock::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAutoCheckBlock::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



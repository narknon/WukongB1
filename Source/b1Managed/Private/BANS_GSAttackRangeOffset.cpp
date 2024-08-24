#include "BANS_GSAttackRangeOffset.h"

UBANS_GSAttackRangeOffset::UBANS_GSAttackRangeOffset() {
    this->EnablePitch = false;
    this->PitchMin = 0.00f;
    this->PitchMax = 0.00f;
    this->AnimSequence = NULL;
    this->BaseAnimSequencePosition = 0.00f;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
}

void UBANS_GSAttackRangeOffset::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAttackRangeOffset::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSAttackRangeOffset::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



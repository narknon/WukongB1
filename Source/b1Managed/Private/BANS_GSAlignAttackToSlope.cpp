#include "BANS_GSAlignAttackToSlope.h"

UBANS_GSAlignAttackToSlope::UBANS_GSAlignAttackToSlope() {
    this->AlignType = CharacterSlopeAlignType::None;
}

void UBANS_GSAlignAttackToSlope::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAlignAttackToSlope::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSAlignAttackToSlope::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



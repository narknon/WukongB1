#include "BANS_GSMontageJumpToSectionWhenHasBuff.h"

UBANS_GSMontageJumpToSectionWhenHasBuff::UBANS_GSMontageJumpToSectionWhenHasBuff() {
    this->BuffID = 0;
    this->bJumpImmediately = false;
}

void UBANS_GSMontageJumpToSectionWhenHasBuff::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

EGsEnAnimNS UBANS_GSMontageJumpToSectionWhenHasBuff::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}

void UBANS_GSMontageJumpToSectionWhenHasBuff::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSMontageJumpToSectionWhenHasBuff::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

bool UBANS_GSMontageJumpToSectionWhenHasBuff::GSAllowCrossSection_Implementation() const {
    return false;
}

FString UBANS_GSMontageJumpToSectionWhenHasBuff::GetJumpableSectionPrefix_Implementation() const {
    return TEXT("");
}



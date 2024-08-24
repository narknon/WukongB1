#include "BANS_GSMontageJumpToSection.h"

UBANS_GSMontageJumpToSection::UBANS_GSMontageJumpToSection() {
    this->bReversePreDetectionResult = false;
    this->bJumpImmediately = false;
}

EGsEnAnimNS UBANS_GSMontageJumpToSection::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}

void UBANS_GSMontageJumpToSection::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

bool UBANS_GSMontageJumpToSection::GSAllowCrossSection_Implementation() const {
    return false;
}

FString UBANS_GSMontageJumpToSection::GetJumpableSectionPrefix_Implementation() const {
    return TEXT("");
}



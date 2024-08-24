#include "BANS_GSSetAMSpeedRate.h"

UBANS_GSSetAMSpeedRate::UBANS_GSSetAMSpeedRate() {
    this->AnimNSType = EGsEnAnimNS::AMSpeedRate;
    this->SectionSpeedRate = 1.00f;
}

void UBANS_GSSetAMSpeedRate::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

EGsEnAnimNS UBANS_GSSetAMSpeedRate::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}

void UBANS_GSSetAMSpeedRate::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

void UBANS_GSSetAMSpeedRate::GSValidateInputCS_Implementation(AActor* Actor) const {
}

float UBANS_GSSetAMSpeedRate::GetModifySpeedRate_Implementation() const {
    return 0.0f;
}



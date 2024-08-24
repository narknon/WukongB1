#include "BANS_GSAISkillFeature.h"
#include "EGsEnAnimNS.h"

UBANS_GSAISkillFeature::UBANS_GSAISkillFeature() {
    this->AnimNSType = EGsEnAnimNS::AISkillFeature;
    this->DurationTime = 0.00f;
    this->IsUseNotifyTime = true;
}

void UBANS_GSAISkillFeature::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



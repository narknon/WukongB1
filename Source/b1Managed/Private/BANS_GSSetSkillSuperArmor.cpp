#include "BANS_GSSetSkillSuperArmor.h"

UBANS_GSSetSkillSuperArmor::UBANS_GSSetSkillSuperArmor() {
    this->SkillSuperArmorValue = -1.00f;
    this->SSABreakAssignedAnim = NULL;
}

void UBANS_GSSetSkillSuperArmor::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSetSkillSuperArmor::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

bool UBANS_GSSetSkillSuperArmor::UpdateSkillSuperArmorLevelInfo() const {
    return false;
}

bool UBANS_GSSetSkillSuperArmor::GSAllowCrossSection_Implementation() const {
    return false;
}



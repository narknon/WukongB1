#include "BAN_GSCallMasterUseSkill.h"

UBAN_GSCallMasterUseSkill::UBAN_GSCallMasterUseSkill() {
    this->MasterSkillID = 0;
}

void UBAN_GSCallMasterUseSkill::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSCallMasterUseSkill::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}



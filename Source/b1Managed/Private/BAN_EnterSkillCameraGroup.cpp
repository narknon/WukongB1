#include "BAN_EnterSkillCameraGroup.h"

UBAN_EnterSkillCameraGroup::UBAN_EnterSkillCameraGroup() {
    this->CameraGroupId = 0;
}

void UBAN_EnterSkillCameraGroup::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_EnterSkillCameraGroup::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}



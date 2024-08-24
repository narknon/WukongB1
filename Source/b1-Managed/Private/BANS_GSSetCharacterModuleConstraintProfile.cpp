#include "BANS_GSSetCharacterModuleConstraintProfile.h"

UBANS_GSSetCharacterModuleConstraintProfile::UBANS_GSSetCharacterModuleConstraintProfile() {
    this->EquipPosition = EquipPosition::Head;
}

void UBANS_GSSetCharacterModuleConstraintProfile::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSetCharacterModuleConstraintProfile::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



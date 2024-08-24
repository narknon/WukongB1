#include "BANS_GSComboWindow.h"

UBANS_GSComboWindow::UBANS_GSComboWindow() {
    this->AnimNSType = EGsEnAnimNS::ComboWindow;
    this->EnableHitModifySkillScore = false;
}

EGsEnAnimNS UBANS_GSComboWindow::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}

void UBANS_GSComboWindow::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



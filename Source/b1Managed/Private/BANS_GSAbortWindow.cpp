#include "BANS_GSAbortWindow.h"
#include "EGsEnAnimNS.h"

UBANS_GSAbortWindow::UBANS_GSAbortWindow() {
    this->AnimNSType = EGsEnAnimNS::AbortWindow;
}

void UBANS_GSAbortWindow::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



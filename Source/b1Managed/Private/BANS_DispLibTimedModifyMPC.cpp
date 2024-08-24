#include "BANS_DispLibTimedModifyMPC.h"

UBANS_DispLibTimedModifyMPC::UBANS_DispLibTimedModifyMPC() {
    this->CanBePlacedInASCS = true;
    this->CanUseQueuedType = true;
    this->MPC = NULL;
    this->DelayTimeAfterStop = 0.00f;
    this->PausePriority = 0;
    this->EndStagePriority = 0;
    this->ModMPCPriority = 0;
    this->ModMPCEndStagePriority = 0;
}

void UBANS_DispLibTimedModifyMPC::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_DispLibTimedModifyMPC::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



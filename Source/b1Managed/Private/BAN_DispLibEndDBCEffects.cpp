#include "BAN_DispLibEndDBCEffects.h"

UBAN_DispLibEndDBCEffects::UBAN_DispLibEndDBCEffects() {
    this->EditorActive = false;
    this->EditorPlayActive = false;
    this->OnlyEndFX = true;
    this->OnlyEndProcedureEndMode = false;
    this->EndStagePriority = -1;
}

void UBAN_DispLibEndDBCEffects::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}



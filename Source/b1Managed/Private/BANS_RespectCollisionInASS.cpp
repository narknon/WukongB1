#include "BANS_RespectCollisionInASS.h"

UBANS_RespectCollisionInASS::UBANS_RespectCollisionInASS() {
}

void UBANS_RespectCollisionInASS::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_RespectCollisionInASS::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

bool UBANS_RespectCollisionInASS::GSAllowCrossSection_Implementation() const {
    return false;
}



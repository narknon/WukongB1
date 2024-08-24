#include "BANS_GSCastDingShen.h"
#include "EGsEnAnimNS.h"

UBANS_GSCastDingShen::UBANS_GSCastDingShen() {
    this->AnimNSType = EGsEnAnimNS::CastDingShen;
    this->ImmobilizeConfigID = 0;
}

void UBANS_GSCastDingShen::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}



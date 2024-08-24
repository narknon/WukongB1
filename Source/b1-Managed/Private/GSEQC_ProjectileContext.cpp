#include "GSEQC_ProjectileContext.h"
#include "EBGUEQCQueryType.h"

UGSEQC_ProjectileContext::UGSEQC_ProjectileContext() {
    this->EQCQueryType = EBGUEQCQueryType::ActorSet;
    this->ProjectileID = 0;
}

void UGSEQC_ProjectileContext::ProvideActorsSetCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



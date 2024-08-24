#include "GSEQC_PlayerContext.h"
#include "EBGUEQCQueryType.h"

UGSEQC_PlayerContext::UGSEQC_PlayerContext() {
    this->EQCQueryType = EBGUEQCQueryType::ActorSet;
}

void UGSEQC_PlayerContext::ProvideActorsSetCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



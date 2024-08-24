#include "GSEQC_SummonContext.h"
#include "EBGUEQCQueryType.h"

UGSEQC_SummonContext::UGSEQC_SummonContext() {
    this->EQCQueryType = EBGUEQCQueryType::ActorSet;
}

void UGSEQC_SummonContext::ProvideActorsSetCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



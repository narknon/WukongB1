#include "GSEQC_TargetContext.h"
#include "EBGUEQCQueryType.h"

UGSEQC_TargetContext::UGSEQC_TargetContext() {
    this->EQCQueryType = EBGUEQCQueryType::ActorSet;
}

void UGSEQC_TargetContext::ProvideActorsSetCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



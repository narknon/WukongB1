#include "GSEQC_TeamContext.h"
#include "EBGUEQCQueryType.h"

UGSEQC_TeamContext::UGSEQC_TeamContext() {
    this->EQCQueryType = EBGUEQCQueryType::ActorSet;
}

void UGSEQC_TeamContext::ProvideActorsSetCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



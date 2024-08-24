#include "GSEQC_CaptainContext.h"
#include "EBGUEQCQueryType.h"

UGSEQC_CaptainContext::UGSEQC_CaptainContext() {
    this->EQCQueryType = EBGUEQCQueryType::SingleActor;
}

void UGSEQC_CaptainContext::ProvideSingleActorCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



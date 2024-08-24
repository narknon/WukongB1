#include "GSEQC_QATargetLocationContext.h"
#include "EBGUEQCQueryType.h"

UGSEQC_QATargetLocationContext::UGSEQC_QATargetLocationContext() {
    this->EQCQueryType = EBGUEQCQueryType::LocationSet;
}

void UGSEQC_QATargetLocationContext::ProvideLocationsSetCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



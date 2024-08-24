#include "GSEQC_QuerierNavProjectLocation.h"
#include "EBGUEQCQueryType.h"

UGSEQC_QuerierNavProjectLocation::UGSEQC_QuerierNavProjectLocation() {
    this->EQCQueryType = EBGUEQCQueryType::LocationSet;
}

void UGSEQC_QuerierNavProjectLocation::ProvideLocationsSetCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



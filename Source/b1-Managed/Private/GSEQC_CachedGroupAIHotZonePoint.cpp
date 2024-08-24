#include "GSEQC_CachedGroupAIHotZonePoint.h"
#include "EBGUEQCQueryType.h"

UGSEQC_CachedGroupAIHotZonePoint::UGSEQC_CachedGroupAIHotZonePoint() {
    this->EQCQueryType = EBGUEQCQueryType::SingleLocation;
}

void UGSEQC_CachedGroupAIHotZonePoint::ProvideSingleLocationCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



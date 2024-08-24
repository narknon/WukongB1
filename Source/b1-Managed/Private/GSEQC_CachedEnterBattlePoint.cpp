#include "GSEQC_CachedEnterBattlePoint.h"
#include "EBGUEQCQueryType.h"

UGSEQC_CachedEnterBattlePoint::UGSEQC_CachedEnterBattlePoint() {
    this->EQCQueryType = EBGUEQCQueryType::SingleLocation;
}

void UGSEQC_CachedEnterBattlePoint::ProvideSingleLocationCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



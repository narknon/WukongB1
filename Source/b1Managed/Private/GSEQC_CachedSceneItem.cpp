#include "GSEQC_CachedSceneItem.h"
#include "EBGUEQCQueryType.h"

UGSEQC_CachedSceneItem::UGSEQC_CachedSceneItem() {
    this->EQCQueryType = EBGUEQCQueryType::ActorSet;
}

void UGSEQC_CachedSceneItem::ProvideActorsSetCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



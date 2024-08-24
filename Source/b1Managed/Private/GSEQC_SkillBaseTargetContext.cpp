#include "GSEQC_SkillBaseTargetContext.h"
#include "EBGUEQCQueryType.h"

UGSEQC_SkillBaseTargetContext::UGSEQC_SkillBaseTargetContext() {
    this->EQCQueryType = EBGUEQCQueryType::ActorSet;
}

void UGSEQC_SkillBaseTargetContext::ProvideActorsSetCS_Implementation(UObject* QuerierObject, AActor* QuerierActor) const {
}



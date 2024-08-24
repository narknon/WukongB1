#include "BMPS_PerformerConfig.h"

UBMPS_PerformerConfig::UBMPS_PerformerConfig() {
    this->PerformerTagMapping = NULL;
}

FString UBMPS_PerformerConfig::GetDisplayTextCS_Implementation() const {
    return TEXT("");
}

void UBMPS_PerformerConfig::AfterLevelSequenceActorInitializedCS_Implementation(UMoviePipeline* InPipeline) {
}



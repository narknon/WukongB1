#include "BMPS_CLS.h"

UBMPS_CLS::UBMPS_CLS() {
    this->bOverrideBlendInSpeed = true;
    this->BlendInSpeed = 100.00f;
}

FString UBMPS_CLS::GetDisplayTextCS_Implementation() const {
    return TEXT("");
}

void UBMPS_CLS::SetupForPipelineCS_Implementation(UMoviePipeline* InPipeline) {
}

void UBMPS_CLS::TeardownForPipelineCS_Implementation(UMoviePipeline* InPipeline) {
}

bool UBMPS_CLS::IgnoreTransientFiltersCS_Implementation() const {
    return false;
}



#include "GSEQTBase.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UGSEQTBase::UGSEQTBase() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

bool UGSEQTBase::ShouldUseCustomItemScore_Implementation() const {
    return false;
}


void UGSEQTBase::SetWorkOnFloatValuesCS(bool bWorkOnFloats) {
}

void UGSEQTBase::SetItemScoreFloat(float Score) const {
}

void UGSEQTBase::SetItemScoreBool(bool bScore) const {
}






bool UGSEQTBase::GetWorkOnFloatValuesCS() {
    return false;
}



void UGSEQTBase::ForceItemStatePassed() const {
}

void UGSEQTBase::ForceItemStateFailed() const {
}



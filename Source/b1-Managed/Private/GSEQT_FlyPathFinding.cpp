#include "GSEQT_FlyPathFinding.h"

UGSEQT_FlyPathFinding::UGSEQT_FlyPathFinding() {
    this->TestMode = EEnvTestPathfinding::PathExist;
    this->MaxIterationCount = 5000;
}

void UGSEQT_FlyPathFinding::PreProcessItems_Implementation(const TArray<AActor*>& ContextActors, const TArray<FVector>& ContextLocations) const {
}

void UGSEQT_FlyPathFinding::PostProcessItems_Implementation() const {
}

void UGSEQT_FlyPathFinding::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

bool UGSEQT_FlyPathFinding::ShouldPrepareContext_Implementation() const {
    return false;
}

FString UGSEQT_FlyPathFinding::GetDescriptionTitleCS_Implementation() const {
    return TEXT("");
}

FString UGSEQT_FlyPathFinding::GetDescriptionDetailsCS_Implementation() const {
    return TEXT("");
}

void UGSEQT_FlyPathFinding::ProcessCustomItemScoreCS_Implementation(const FGSEnvQueryTestItem& Item) const {
}

bool UGSEQT_FlyPathFinding::ShouldUseCustomItemScore_Implementation() const {
    return false;
}



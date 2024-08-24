#include "GSEQT_HasProjectileInRange.h"

UGSEQT_HasProjectileInRange::UGSEQT_HasProjectileInRange() {
    this->ProjectileID = 0;
    this->CheckRangeRadius = 0.00f;
    this->bOnly2DCheck = false;
}

bool UGSEQT_HasProjectileInRange::ProcessItemCS_Implementation(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const {
    return false;
}

void UGSEQT_HasProjectileInRange::PreProcessItems_Implementation(const TArray<AActor*>& ContextActors, const TArray<FVector>& ContextLocations) const {
}

void UGSEQT_HasProjectileInRange::PostProcessItems_Implementation() const {
}

bool UGSEQT_HasProjectileInRange::ShouldPrepareContext_Implementation() const {
    return false;
}

FString UGSEQT_HasProjectileInRange::GetDescriptionTitleCS_Implementation() const {
    return TEXT("");
}

FString UGSEQT_HasProjectileInRange::GetDescriptionDetailsCS_Implementation() const {
    return TEXT("");
}



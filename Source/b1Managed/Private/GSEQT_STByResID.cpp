#include "GSEQT_STByResID.h"

UGSEQT_STByResID::UGSEQT_STByResID() {
    this->ResID = 0;
}

bool UGSEQT_STByResID::ProcessItemCS_Implementation(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const {
    return false;
}

bool UGSEQT_STByResID::ShouldPrepareContext_Implementation() const {
    return false;
}



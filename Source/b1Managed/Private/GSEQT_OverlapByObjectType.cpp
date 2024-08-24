#include "GSEQT_OverlapByObjectType.h"

UGSEQT_OverlapByObjectType::UGSEQT_OverlapByObjectType() {
}

bool UGSEQT_OverlapByObjectType::ProcessItemCS_Implementation(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const {
    return false;
}

bool UGSEQT_OverlapByObjectType::ShouldPrepareContext_Implementation() const {
    return false;
}

FString UGSEQT_OverlapByObjectType::GetDescriptionTitleCS_Implementation() const {
    return TEXT("");
}



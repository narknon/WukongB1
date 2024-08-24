#include "GSEQT_CheckAngle.h"

UGSEQT_CheckAngle::UGSEQT_CheckAngle() {
    this->BaseContext = EEQCType::None;
    this->TargetContext = EEQCType::None;
    this->AngleMin = 0.00f;
    this->AngleMax = 0.00f;
}

bool UGSEQT_CheckAngle::ProcessItemCS_Implementation(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const {
    return false;
}

bool UGSEQT_CheckAngle::ShouldPrepareContext_Implementation() const {
    return false;
}



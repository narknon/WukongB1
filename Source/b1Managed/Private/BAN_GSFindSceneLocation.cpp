#include "BAN_GSFindSceneLocation.h"

UBAN_GSFindSceneLocation::UBAN_GSFindSceneLocation() {
    this->SceneLocationType = SceneLocationType::LandingPoint;
    this->LocationCachedDataId = 19;
    this->FindSceneItemWay = FindSceneItemWay::FindNearest;
    this->DistanceWeight = 0.00f;
    this->AngleWeight = 0.00f;
    this->LineTraceWeight = 0.00f;
    this->DistanceCoefficient = 0.00f;
    this->AngleCoefficient = 0.00f;
    this->BestLandingDistance = 0.00f;
    this->EnableSearchDistanceScope = false;
    this->MinSearchDistance = 0.00f;
    this->MaxSearchDistance = 0.00f;
    this->EnableSearchAngleRequirement = false;
    this->RequiredMaxSearchAngle = 0.00f;
}

void UBAN_GSFindSceneLocation::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSFindSceneLocation::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}



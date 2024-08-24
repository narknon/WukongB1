#include "LandscapeRoadSpline.h"

ALandscapeRoadSpline::ALandscapeRoadSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoadWidth = 0.00f;
    this->SplineMesh = NULL;
    this->RoadMaterial = NULL;
    this->RoadRVT = NULL;
}

void ALandscapeRoadSpline::ReceiveTick_Implementation(float DeltaSeconds) {
}



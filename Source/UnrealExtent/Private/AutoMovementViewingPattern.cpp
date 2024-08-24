#include "AutoMovementViewingPattern.h"

FAutoMovementViewingPattern::FAutoMovementViewingPattern() {
    this->bUseSparseVersion = false;
    this->bVisualizeScatteredPoints = false;
    this->PointInstanceScale = 0.00f;
    this->TotalPitchDegree = 0.00f;
    this->TotalYawDegree = 0.00f;
    this->DistanceCheckBias = 0.00f;
    this->RotationCheckBias = 0.00f;
    this->PoseTickTotalCount = 0;
    this->bUseVirtualPlayer = false;
    this->bAttractEnemy = false;
}


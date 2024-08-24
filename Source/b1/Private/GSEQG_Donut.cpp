#include "GSEQG_Donut.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UGSEQG_Donut::UGSEQG_Donut() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->InnerRadius = 300.00f;
    this->OuterRadius = 1000.00f;
    this->NumberOfRings = 3;
    this->PointsPerRing = 8;
    this->AngleCenterDirection = EGSAngleCenterDirection::Forward;
    this->LeftAngle = 180.00f;
    this->RightAngle = 180.00f;
}



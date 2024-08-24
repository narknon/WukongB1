#include "GSEQG_Circle.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UGSEQG_Circle::UGSEQG_Circle() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->CircleRadius = 1000.00f;
    this->SpaceBetween = 50.00f;
    this->NumberOfPoints = 8;
    this->PointOnCircleSpacingMethod = EGSPointOnCircleSpacingMethod::BySpaceBetween;
    this->AngleCenterDirection = EGSAngleCenterDirection::Forward;
    this->LeftAngle = 180.00f;
    this->RightAngle = 180.00f;
}



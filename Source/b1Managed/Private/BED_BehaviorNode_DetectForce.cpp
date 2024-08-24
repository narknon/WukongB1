#include "BED_BehaviorNode_DetectForce.h"

UBED_BehaviorNode_DetectForce::UBED_BehaviorNode_DetectForce() {
    this->OutputPins.AddDefaulted(2);
    this->ForceType = DetectedForceType::Friend;
    this->bDetectUnit = true;
    this->bDetectBullet = true;
    this->bDetectMagicField = true;
    this->SuccessCount = 1;
}

FString UBED_BehaviorNode_DetectForce::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}



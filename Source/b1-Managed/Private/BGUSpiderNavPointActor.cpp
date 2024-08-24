#include "BGUSpiderNavPointActor.h"

ABGUSpiderNavPointActor::ABGUSpiderNavPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Root = NULL;
    this->Arrow = NULL;
    this->LinkRadius = 0.00f;
    this->LinkAngle = 0.00f;
    this->IsGroundPoint = false;
}



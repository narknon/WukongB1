#include "BUS_SceneRotateTriggerConfigComp.h"

UBUS_SceneRotateTriggerConfigComp::UBUS_SceneRotateTriggerConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimSequence = NULL;
    this->LocationCurve = NULL;
    this->RotationCurve = NULL;
    this->MultiplierCurveL = NULL;
    this->MultiplierCurveR = NULL;
}



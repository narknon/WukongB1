#include "BUS_DumperTruckTriggerConfigComp.h"

UBUS_DumperTruckTriggerConfigComp::UBUS_DumperTruckTriggerConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TamerActor = NULL;
    this->AnimationAsset = NULL;
    this->turnSpeed = 0;
    this->Acceleration = 0.00f;
    this->MaxSpeed = 0.00f;
    this->MinSpeed = 0.00f;
    this->StartSpeed = 0.00f;
    this->MultiSplineDefaultIndex = 0;
    this->FirstAccelerationIndex = 0;
    this->SecondAccelerationIndex = 0;
    this->SpeedRateParam = 0.00f;
    this->RotatorWaitTime = 0.00f;
    this->SpeedRateParamCurve = NULL;
    this->UseCurveTime = 0.00f;
    this->StartPointIndex = 0;
    this->IsStartForward = false;
    this->ForwardBuffID = 0;
    this->BackBuffID = 0;
    this->ImmobilizeBuffSpeedThreshold = 0;
    this->ImmobilizeDeBuffSpeedThreshold = 0;
    this->ImmobilizeBuffID = 0;
    this->ImmobilizeDeBuffID = 0;
    this->DamageAvailableSpeedThreshold = 0.00f;
    this->DamageDisableSpeedThreshold = 0.00f;
    this->AutoEnable = true;
}



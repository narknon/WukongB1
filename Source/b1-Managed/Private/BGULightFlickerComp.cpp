#include "BGULightFlickerComp.h"

UBGULightFlickerComp::UBGULightFlickerComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->flickRange = 20.00f;
    this->flickTimeRandomMin = 0.02f;
    this->flickTimeRandomMax = 0.30f;
    this->randomRemapPower = 1.00f;
    this->destroyTime = 0.00f;
}

void UBGULightFlickerComp::OverrideProperty(float NewFlickRange, float NewFlickTimeRandomMin, float NewFlickTimeRandomMax, float NewRandomRemapPower, float NewDestroyTime, FVector NewPosFlickRange) {
}

void UBGULightFlickerComp::ReceiveBeginPlay_Implementation() {
}

void UBGULightFlickerComp::TickComponentInCS_Implementation(float DeltaTime) {
}



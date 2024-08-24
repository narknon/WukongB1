#include "BGULightFlickerForSequenceComp.h"

UBGULightFlickerForSequenceComp::UBGULightFlickerForSequenceComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartIntensity = 0.00f;
    this->TargetIntensity = 50.00f;
    this->LerpTime = 3.87f;
    this->bBeginTick = false;
}

void UBGULightFlickerForSequenceComp::ReceiveBeginPlay_Implementation() {
}

void UBGULightFlickerForSequenceComp::TickComponentInCS_Implementation(float DeltaTime) {
}



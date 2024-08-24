#include "BUS_SpringArmComponent.h"

UBUS_SpringArmComponent::UBUS_SpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsXSmoothFixed = false;
    this->IsYSmoothFixed = false;
    this->IsZSmoothFixed = false;
    this->DefaultCameraLagSpeed = 0.00f;
}

FVector UBUS_SpringArmComponent::BlendLocationsInCS_Implementation(const FVector& OriginArmLocation, const FVector& DesiredArmLocation, const FHitResult& HitResult, float DeltaTime) {
    return FVector{};
}

FVector UBUS_SpringArmComponent::CalcSmoothLocation_Implementation(FVector Current, FVector Target, float DeltaTime, FVector SmoothSpeed) {
    return FVector{};
}



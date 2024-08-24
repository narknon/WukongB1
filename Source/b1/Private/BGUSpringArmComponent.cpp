#include "BGUSpringArmComponent.h"

UBGUSpringArmComponent::UBGUSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableHideMeshTrace = false;
    this->SpringBackSpeed = 1.00f;
    this->CameraLagUseMaxOffset = 10.00f;
}

void UBGUSpringArmComponent::ResetArmLengthLerpCache() {
}

void UBGUSpringArmComponent::GetPreviousValues(FVector& OutPreviousDesiredLoc, FVector& OutPreviousArmOrigin, FRotator& OutPreviousDesiredRot) {
}

FVector UBGUSpringArmComponent::CalcSmoothLocation_Implementation(FVector Current, FVector Target, float DeltaTime, FVector SmoothSpeed) {
    return FVector{};
}

FVector UBGUSpringArmComponent::BlendLocationsInCS_Implementation(const FVector& OriginArmLocation, const FVector& DesiredArmLocation, const FHitResult& HitResult, float DeltaTime) {
    return FVector{};
}



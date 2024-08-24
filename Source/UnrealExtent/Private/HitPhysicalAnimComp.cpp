#include "HitPhysicalAnimComp.h"

UHitPhysicalAnimComp::UHitPhysicalAnimComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeightCurve = NULL;
    this->HitSegmentation = 0;
    this->CurveWeightAtTime = 0.00f;
    this->TimeSum = 0.00f;
    this->ForceStrength = 0.00f;
    this->Mesh = NULL;
}

void UHitPhysicalAnimComp::TimerTick() {
}

void UHitPhysicalAnimComp::TimerCallback() {
}

void UHitPhysicalAnimComp::SetBonesPhysicWeight(TArray<FName> BoneNames) {
}

void UHitPhysicalAnimComp::SetBonesPhysic(TArray<FName> BoneNames) {
}

void UHitPhysicalAnimComp::SetBonesKinematic(TArray<FName> BoneNames) {
}

void UHitPhysicalAnimComp::SetBodyBonePhysic(USkeletalMeshComponent* TargetMesh, FName BoneName, bool NewBool) {
}

void UHitPhysicalAnimComp::InitiazliePhysicalAnimation() {
}

void UHitPhysicalAnimComp::HitBoneImpulse() {
}

bool UHitPhysicalAnimComp::CreateTimer(float TimeDelay) {
    return false;
}

TArray<FName> UHitPhysicalAnimComp::BonesSphereMask(USkeletalMeshComponent* TargetSkeletalMesh, float Radius, FVector WorldPosition, TArray<FName> WhiteNamesList) {
    return TArray<FName>();
}

bool UHitPhysicalAnimComp::BeHit(const TArray<FName>& BoneList, FVector InForceVector, float InForceStrength) {
    return false;
}



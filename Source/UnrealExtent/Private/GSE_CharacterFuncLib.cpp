#include "GSE_CharacterFuncLib.h"

UGSE_CharacterFuncLib::UGSE_CharacterFuncLib() {
}

void UGSE_CharacterFuncLib::ToggleActorTickEnabled(AActor* InActor, bool bEnable, bool ToggleActorTick, bool ToggleMoveComp, bool ToggleAIComp, bool ToggleSKMeshComp, bool ToggleAkComp, bool ToggleINCLUDE_CHILD_ACTOR) {
}

void UGSE_CharacterFuncLib::Tick(AActor* Actor, float DeltaTime) {
}

void UGSE_CharacterFuncLib::SetMontagePlayRate(ACharacter* Character, float PlayRate) {
}

void UGSE_CharacterFuncLib::SetLocalScreenPercentageIfLocalController(AActor* Actor, AController* Controller, float ScreenPercentage, float& OutLocalScreenPercentage) {
}

void UGSE_CharacterFuncLib::SetAnimRootMotionTranslationScale(ACharacter* Character, float Scale) {
}

void UGSE_CharacterFuncLib::SetAllPABodiesBelowResponseToChannels(USkeletalMeshComponent* Mesh, const FName& BoneName, const TArray<TEnumAsByte<ECollisionChannel>>& Channels, TEnumAsByte<ECollisionResponse> NewResponse) {
}

void UGSE_CharacterFuncLib::SetAllPABodiesBelowResponseToAllChannels(USkeletalMeshComponent* Mesh, const FName& BoneName, TEnumAsByte<ECollisionResponse> NewResponse) {
}

void UGSE_CharacterFuncLib::SetActorSKMeshesUpdateRateOptimizations(AActor* Actor, bool bEnable) {
}

void UGSE_CharacterFuncLib::RecreatePhysicsState(USkeletalMeshComponent* Mesh) {
}

FTransform UGSE_CharacterFuncLib::GetSocketTransform(USceneComponent* Comp, const FName& SocketName, TEnumAsByte<ERelativeTransformSpace> TransfromSpace) {
    return FTransform{};
}

FRotator UGSE_CharacterFuncLib::GetSocketRotation(USceneComponent* Comp, const FName& SocketName) {
    return FRotator{};
}

FVector UGSE_CharacterFuncLib::GetSocketLocation(USceneComponent* Comp, const FName& SocketName) {
    return FVector{};
}

FTransform UGSE_CharacterFuncLib::GetSceneComponentTransformByName(AActor* Actor, const FString& ComponentName) {
    return FTransform{};
}

USceneComponent* UGSE_CharacterFuncLib::GetSceneComponentByName(AActor* Actor, const FString& ComponentName) {
    return NULL;
}

float UGSE_CharacterFuncLib::GetPathFollowingBrakingDistance(UCharacterMovementComponent* CharacterMovement) {
    return 0.0f;
}

FTransform UGSE_CharacterFuncLib::GetBoneTransformByMesh(USkeletalMeshComponent* Mesh, int32 BoneIndex) {
    return FTransform{};
}

FTransform UGSE_CharacterFuncLib::GetBoneTransform(ACharacter* Character, int32 BoneIndex) {
    return FTransform{};
}

float UGSE_CharacterFuncLib::GetActorBoundingSphereRadius(AActor* Actor) {
    return 0.0f;
}

float UGSE_CharacterFuncLib::CalculateScreenPercentageFromController(AActor* Actor, AController* Controller) {
    return 0.0f;
}

float UGSE_CharacterFuncLib::CalculateMaxDistanceFactor(AActor* Actor) {
    return 0.0f;
}



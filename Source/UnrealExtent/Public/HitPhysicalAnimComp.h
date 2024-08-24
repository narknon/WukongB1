#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "HitPhysicalAnimComp.generated.h"

class UCurveFloat;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNREALEXTENT_API UHitPhysicalAnimComp : public UPhysicalAnimationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicalAnimationData PhysicalAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitSegmentation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveWeightAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HitBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForceVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceStrength;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    UHitPhysicalAnimComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TimerTick();
    
    UFUNCTION(BlueprintCallable)
    void TimerCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetBonesPhysicWeight(TArray<FName> BoneNames);
    
    UFUNCTION(BlueprintCallable)
    void SetBonesPhysic(TArray<FName> BoneNames);
    
    UFUNCTION(BlueprintCallable)
    void SetBonesKinematic(TArray<FName> BoneNames);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyBonePhysic(USkeletalMeshComponent* TargetMesh, FName BoneName, bool NewBool);
    
    UFUNCTION(BlueprintCallable)
    void InitiazliePhysicalAnimation();
    
    UFUNCTION(BlueprintCallable)
    void HitBoneImpulse();
    
    UFUNCTION(BlueprintCallable)
    bool CreateTimer(float TimeDelay);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> BonesSphereMask(USkeletalMeshComponent* TargetSkeletalMesh, float Radius, FVector WorldPosition, TArray<FName> WhiteNamesList);
    
    UFUNCTION(BlueprintCallable)
    bool BeHit(const TArray<FName>& BoneList, FVector InForceVector, float InForceStrength);
    
};


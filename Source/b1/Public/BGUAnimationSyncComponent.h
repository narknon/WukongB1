#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BGUAnimationSyncComponent.generated.h"

class AActor;
class UAnimMontage;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UBGUAnimationSyncComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* OwnerMasterComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DummyMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DrivingComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GuestActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GuestMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GuestMontage;
    
public:
    UBGUAnimationSyncComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSwitchSyncGuestTarget(AActor* NewGuest);
    
    UFUNCTION(BlueprintCallable)
    void OnRespectCollisionInASS(bool bRespect);
    
    UFUNCTION(BlueprintCallable)
    void OnEndSyncAnimationOnGuest(bool bStopGuestMontage);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSyncAnimationOnGuest(UAnimMontage* InGuestMontage, FName InTargetSyncPointOnHost, FName InSelfSyncPointOnGuest, bool bEnableDebugDraw, float NotifyBeginTime, USkeletalMeshComponent* DummyMesh, AActor* InGuestActor, float InBlendInTime, float PlayRate, bool bIgnoreSceneCollision);
    
};


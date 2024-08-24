#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUSimpleActorBaseCS.h"
#include "ProjectileSpawnEventInfo.h"
#include "BGUProjectileBaseActor.generated.h"

class AActor;
class UBGUProjectileMovementComponent;
class UBUS_ProjectileConfigInfoComp;
class UBoxComponent;
class UCapsuleComponent;
class USceneComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABGUProjectileBaseActor : public ABGUSimpleActorBaseCS {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleCollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CustomCollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LineTraceStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Interact_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Interact_End;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ProjectileConfigInfoComp* ProjectileConfigInfoComp;
    
    ABGUProjectileBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDead();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchPre();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDrawSign(AActor* HitActor, FTransform HitTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnFinished(FProjectileSpawnEventInfo ProjectileSpawnEventInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProjectileID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBGUProjectileMovementComponent* GetProjectileMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckDrawSignCondition(AActor* HitActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetStaticMeshCompChildsNum();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ProjectileAbilityCheck_ByBPConfig();
    
};


#pragma once
#include "CoreMinimal.h"
#include "ActorComponentCS.h"
#include "BGUNvFlowCameraBlockLogic.generated.h"

class UCapsuleComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUNvFlowCameraBlockLogic : public UActorComponentCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ActorComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleBlockerRaidusRate;
    
    UBGUNvFlowCameraBlockLogic(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Init(USceneComponent* Cam, USceneComponent* Actor, UCapsuleComponent* Blocker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
};


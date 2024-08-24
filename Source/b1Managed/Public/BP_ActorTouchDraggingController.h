#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "BP_ActorTouchDraggingController.generated.h"

UCLASS(Blueprintable)
class ABP_ActorTouchDraggingController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraceTypeQuery traceChnl;
    
    ABP_ActorTouchDraggingController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnTick(float DeltaTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTouchPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnTouchReleased();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};


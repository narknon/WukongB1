#pragma once
#include "CoreMinimal.h"
#include "BGUFXActorBase.h"
#include "BGUDestructibleActorBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class ABGUDestructibleActorBase : public ABGUFXActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootScaleFactor;
    
    ABGUDestructibleActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DisableCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitDestructedEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDestructedEffect(float SinkDelay, float SinkVelocity, AActor* AtkActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetDestructedEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
};


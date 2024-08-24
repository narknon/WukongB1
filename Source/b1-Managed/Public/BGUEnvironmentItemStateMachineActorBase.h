#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUEnvironmentItemStateMachineActorBase.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class ABGUEnvironmentItemStateMachineActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    ABGUEnvironmentItemStateMachineActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGSReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnableOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisableOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollisionEndOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetToOverlapEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetToOverlapDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollisionBeginOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayAkEventWithDialogue(UAkComponent* AkComp, UAkAudioEvent* AkEvent);
    
};


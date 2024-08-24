#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "ECSNetSerialization.h"
#include "BGWGameState.generated.h"

class UActorDataContainer;

UCLASS(Blueprintable)
class B1_API ABGWGameState : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorDataContainer* BGSDataComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FECSNetSerialization ECSDataNetSerialization;
    
    ABGWGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeComponentsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickDispatchEventCS(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostTickDispatchEventCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsGSEventDebuggerOpenCS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMatchIsWaitingToStartCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMatchHasStartedCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMatchHasEndedCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLeavingMapCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleBeginPlayCS();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayCS();
    
};


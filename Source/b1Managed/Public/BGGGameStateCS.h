#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BGWGameState.h"
#include "BGGGameStateCS.generated.h"

class UActorCompContainerCS;

UCLASS(Blueprintable)
class ABGGGameStateCS : public ABGWGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
    ABGGGameStateCS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleBeginPlayCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleLeavingMapCS();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTickDispatchEventCS(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMatchHasEndedCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMatchHasStartedCS();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsGSEventDebuggerOpenCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostTickDispatchEventCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInitializeComponentsCS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMatchIsWaitingToStartCS();
    
};


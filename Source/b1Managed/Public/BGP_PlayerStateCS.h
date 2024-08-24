#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BGPPlayerState.h"
#include "BGP_PlayerStateCS.generated.h"

class UActorCompContainerCS;

UCLASS(Blueprintable)
class ABGP_PlayerStateCS : public ABGPPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
    ABGP_PlayerStateCS(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInitializeComponentsCS();
    
};


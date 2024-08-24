#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ECSNetSerialization.h"
#include "BGPPlayerState.generated.h"

class UActorDataContainer;

UCLASS(Blueprintable)
class ABGPPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FECSNetSerialization ECSDataNetSerialization;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorDataContainer* BGPDataComp;
    
public:
    ABGPPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeComponentsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayCS();
    
};


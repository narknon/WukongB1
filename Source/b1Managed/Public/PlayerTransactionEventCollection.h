#pragma once
#include "CoreMinimal.h"
#include "ActorComponentCS.h"
#include "PlayerTransactionInteractStartParams.h"
#include "PlayerTransactionEventCollection.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerTransactionEventCollection : public UActorComponentCS {
    GENERATED_BODY()
public:
    UPlayerTransactionEventCollection(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void InteractTransactionStart(FPlayerTransactionInteractStartParams Param);
    
};


#pragma once
#include "CoreMinimal.h"
#include "BaseActorComp.h"
#include "BaseActorCompTickable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UBaseActorCompTickable : public UBaseActorComp {
    GENERATED_BODY()
public:
    UBaseActorCompTickable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickComponentInCS(float DeltaTime);
    
};


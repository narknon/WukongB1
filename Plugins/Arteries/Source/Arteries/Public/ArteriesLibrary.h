#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ArteriesLibrary.generated.h"

class AArteriesActor;

UCLASS(Blueprintable)
class ARTERIES_API UArteriesLibrary : public UObject {
    GENERATED_BODY()
public:
    UArteriesLibrary();

    UFUNCTION(BlueprintCallable)
    static AArteriesActor* FinishSpawningActor(AArteriesActor* Actor, bool AttachToCaller);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AArteriesActor* BeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AArteriesActor> ActorClass, const FTransform& SpawnTransform);
    
};


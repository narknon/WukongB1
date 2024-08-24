#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpawnMultiPointCompFunctionBinder.generated.h"

UCLASS(Blueprintable)
class USpawnMultiPointCompFunctionBinder : public UObject {
    GENERATED_BODY()
public:
    USpawnMultiPointCompFunctionBinder();

    UFUNCTION(BlueprintCallable)
    void OnReplenish();
    
};


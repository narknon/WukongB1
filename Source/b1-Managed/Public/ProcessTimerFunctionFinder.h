#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProcessTimerFunctionFinder.generated.h"

UCLASS(Blueprintable)
class UProcessTimerFunctionFinder : public UObject {
    GENERATED_BODY()
public:
    UProcessTimerFunctionFinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnStep();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletion();
    
};


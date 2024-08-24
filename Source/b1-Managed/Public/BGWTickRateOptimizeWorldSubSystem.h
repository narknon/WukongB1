#pragma once
#include "CoreMinimal.h"
#include "BGWTickableWorldSubSystem.h"
#include "BGWTickRateOptimizeWorldSubSystem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UBGWTickRateOptimizeWorldSubSystem : public UBGWTickableWorldSubSystem {
    GENERATED_BODY()
public:
    UBGWTickRateOptimizeWorldSubSystem();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldBeginPlayCS(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesSupportWorldTypeCS(int32 WorldType) const;
    
};


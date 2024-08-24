#pragma once
#include "CoreMinimal.h"
#include "BGWTickableWorldSubSystem.h"
#include "BGWCellPatitionWorldSubSystem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UBGWCellPatitionWorldSubSystem : public UBGWTickableWorldSubSystem {
    GENERATED_BODY()
public:
    UBGWCellPatitionWorldSubSystem();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTickCS(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInitializeCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldBeginPlayCS(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesSupportWorldTypeCS(int32 WorldType) const;
    
};


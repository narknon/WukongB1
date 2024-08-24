#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FGSOnAKBStateInteruptWrapper.generated.h"

UCLASS(Blueprintable)
class UFGSOnAKBStateInteruptWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFGSOnAKBStateInteruptWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(FName BeginStateName, FName EndStateName, bool IsFromForceSetStateImmediately);
    
};


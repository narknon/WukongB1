#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FGSOnAKBStateEndWrapper.generated.h"

UCLASS(Blueprintable)
class UFGSOnAKBStateEndWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFGSOnAKBStateEndWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(FName BeginStateName, FName EndStateName, bool IsFromForceSetStateImmediately);
    
};


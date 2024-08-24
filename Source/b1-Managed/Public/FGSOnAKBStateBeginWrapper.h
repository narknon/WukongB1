#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FGSOnAKBStateBeginWrapper.generated.h"

UCLASS(Blueprintable)
class UFGSOnAKBStateBeginWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFGSOnAKBStateBeginWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(FName BeginStateName, FName EndStateName, bool IsFromForceSetStateImmediately);
    
};


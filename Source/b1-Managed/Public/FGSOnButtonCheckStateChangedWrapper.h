#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FGSOnButtonCheckStateChangedWrapper.generated.h"

UCLASS(Blueprintable)
class UFGSOnButtonCheckStateChangedWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFGSOnButtonCheckStateChangedWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(int32 GSID, bool bIsChecked);
    
};


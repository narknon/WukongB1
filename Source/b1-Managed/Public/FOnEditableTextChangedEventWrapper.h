#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnEditableTextChangedEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnEditableTextChangedEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnEditableTextChangedEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(FText Text);
    
};


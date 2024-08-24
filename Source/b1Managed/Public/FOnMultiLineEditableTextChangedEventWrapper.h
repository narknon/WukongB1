#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnMultiLineEditableTextChangedEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnMultiLineEditableTextChangedEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnMultiLineEditableTextChangedEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(FText Text);
    
};


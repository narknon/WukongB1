#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnEditableTextBoxChangedEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnEditableTextBoxChangedEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnEditableTextBoxChangedEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(FText Text);
    
};


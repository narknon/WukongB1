#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnKeySelectedWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnKeySelectedWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnKeySelectedWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(FInputChord SelectedKey);
    
};


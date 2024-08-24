#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnSelectionChangedWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnSelectionChangedWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnSelectionChangedWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(const FString& SelectedItem, ESelectInfo::Type SelectionType);
    
};


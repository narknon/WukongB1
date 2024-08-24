#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnEditableTextBoxCommittedEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnEditableTextBoxCommittedEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnEditableTextBoxCommittedEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(FText Text, ETextCommit::Type CommitMethod);
    
};


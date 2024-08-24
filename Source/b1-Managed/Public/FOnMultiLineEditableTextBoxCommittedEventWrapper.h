#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnMultiLineEditableTextBoxCommittedEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnMultiLineEditableTextBoxCommittedEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnMultiLineEditableTextBoxCommittedEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(FText Text, ETextCommit::Type CommitMethod);
    
};


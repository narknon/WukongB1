#pragma once
#include "CoreMinimal.h"
#include "BED_StateNode.h"
#include "BED_StateNode_CustomExit.generated.h"

UCLASS(Blueprintable)
class UBED_StateNode_CustomExit : public UBED_StateNode {
    GENERATED_BODY()
public:
    UBED_StateNode_CustomExit();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextInputsInCS();
    
};


#pragma once
#include "CoreMinimal.h"
#include "BED_StateNode.h"
#include "BED_StateNode_CustomEnter.generated.h"

UCLASS(Blueprintable)
class UBED_StateNode_CustomEnter : public UBED_StateNode {
    GENERATED_BODY()
public:
    UBED_StateNode_CustomEnter();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};


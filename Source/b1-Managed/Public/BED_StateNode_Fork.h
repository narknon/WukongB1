#pragma once
#include "CoreMinimal.h"
#include "BED_StateNode.h"
#include "BED_StateNode_Fork.generated.h"

UCLASS(Blueprintable)
class UBED_StateNode_Fork : public UBED_StateNode {
    GENERATED_BODY()
public:
    UBED_StateNode_Fork();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddOutputInCS() const;
    
};


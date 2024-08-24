#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_LogicalOr.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_LogicalOr : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UBED_ProcessStateNode_LogicalOr();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddInputInCS() const;
    
};


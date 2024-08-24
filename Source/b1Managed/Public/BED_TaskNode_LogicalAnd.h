#pragma once
#include "CoreMinimal.h"
#include "BED_TaskNode.h"
#include "BED_TaskNode_LogicalAnd.generated.h"

UCLASS(Blueprintable)
class UBED_TaskNode_LogicalAnd : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UBED_TaskNode_LogicalAnd();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddInputInCS() const;
    
};


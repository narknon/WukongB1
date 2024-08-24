#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_LogicalAnd.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_LogicalAnd : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UBED_ProcessStateNode_LogicalAnd();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddInputInCS() const;
    
};


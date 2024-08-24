#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessNode.h"
#include "BED_ProcessStateNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_ProcessStateNode : public UBED_ProcessNode {
    GENERATED_BODY()
public:
    UBED_ProcessStateNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBranchGraphNode() const;
    
};


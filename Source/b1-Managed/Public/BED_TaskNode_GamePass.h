#pragma once
#include "CoreMinimal.h"
#include "BED_TaskNode.h"
#include "BED_TaskNode_GamePass.generated.h"

UCLASS(Blueprintable)
class UBED_TaskNode_GamePass : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UBED_TaskNode_GamePass();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};


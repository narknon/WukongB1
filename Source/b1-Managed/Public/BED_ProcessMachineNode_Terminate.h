#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_ProcessMachineNode.h"
#include "BED_ProcessMachineNode_Terminate.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessMachineNode_Terminate : public UBED_ProcessMachineNode {
    GENERATED_BODY()
public:
    UBED_ProcessMachineNode_Terminate();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_ProcessMachineNode.h"
#include "BED_ProcessMachineNode_Fork.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessMachineNode_Fork : public UBED_ProcessMachineNode {
    GENERATED_BODY()
public:
    UBED_ProcessMachineNode_Fork();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddOutputInCS() const;
    
};


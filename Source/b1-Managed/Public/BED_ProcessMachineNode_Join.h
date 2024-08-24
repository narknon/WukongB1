#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_ProcessMachineNode.h"
#include "BED_ProcessMachineNode_Join.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessMachineNode_Join : public UBED_ProcessMachineNode {
    GENERATED_BODY()
public:
    UBED_ProcessMachineNode_Join();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddInputInCS() const;
    
};


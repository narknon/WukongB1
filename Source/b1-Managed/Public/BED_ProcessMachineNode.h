#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessNode.h"
#include "BED_ProcessMachineNode.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_ProcessMachineNode : public UBED_ProcessNode {
    GENERATED_BODY()
public:
    UBED_ProcessMachineNode();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRefreshAssetInCS() const;
    
};


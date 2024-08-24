#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessMachineNode.h"
#include "BED_ProcessMachineNode_TemplateBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_ProcessMachineNode_TemplateBase : public UBED_ProcessMachineNode {
    GENERATED_BODY()
public:
    UBED_ProcessMachineNode_TemplateBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};


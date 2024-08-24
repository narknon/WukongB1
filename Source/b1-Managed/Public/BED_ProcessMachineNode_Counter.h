#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessMachineNode_TemplateBase.h"
#include "BED_ProcessMachineNode_Counter.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_ProcessMachineNode_Counter : public UBED_ProcessMachineNode_TemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Goal;
    
    UBED_ProcessMachineNode_Counter();

};


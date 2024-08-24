#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_NPCSwitchNoInteraction.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_NPCSwitchNoInteraction : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRecover: 1;
    
    UBED_ProcessStateNode_NPCSwitchNoInteraction();

};


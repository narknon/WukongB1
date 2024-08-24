#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_TickAction.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_ProcessStateNode_TickAction : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride: 1;
    
    UBED_ProcessStateNode_TickAction();

};


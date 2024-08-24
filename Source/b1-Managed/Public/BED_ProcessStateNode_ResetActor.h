#pragma once
#include "CoreMinimal.h"
#include "EBGUResetType.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_ResetActor.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_ProcessStateNode_ResetActor : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUResetType ResetType;
    
    UBED_ProcessStateNode_ResetActor();

};


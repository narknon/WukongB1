#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_ClearPlayerStates.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_ClearPlayerStates : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopJump: 1;
    
    UBED_MovieNode_ClearPlayerStates();

};


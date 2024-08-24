#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_UpdateInteractGroup.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_UpdateInteractGroup : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteractGroupID;
    
    UBED_ProcessStateNode_UpdateInteractGroup();

};


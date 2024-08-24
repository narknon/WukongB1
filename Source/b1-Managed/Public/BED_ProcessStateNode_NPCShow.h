#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_NPCShow.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_NPCShow : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsShow: 1;
    
public:
    UBED_ProcessStateNode_NPCShow();

};


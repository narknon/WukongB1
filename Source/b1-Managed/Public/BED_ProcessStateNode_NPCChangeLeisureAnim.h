#pragma once
#include "CoreMinimal.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_NPCChangeLeisureAnim.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_NPCChangeLeisureAnim : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeedChangeLeisureAnimIdx;
    
public:
    UBED_ProcessStateNode_NPCChangeLeisureAnim();

};


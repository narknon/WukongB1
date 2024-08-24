#pragma once
#include "CoreMinimal.h"
#include "EBGUFSMStateName.h"
#include "BAID_Base.h"
#include "BAID_CheckTargetFSMStateActive.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckTargetFSMStateActive : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUFSMStateName FsmState;
    
    UBAID_CheckTargetFSMStateActive();

};


#pragma once
#include "CoreMinimal.h"
#include "EBGUFSMStateName.h"
#include "BAID_Base.h"
#include "BAID_CheckFSMStateActive.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckFSMStateActive : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUFSMStateName FsmState;
    
    UBAID_CheckFSMStateActive();

};


#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "CheckAssignTargetInfo.h"
#include "BAID_CheckAssignTargetCondition.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckAssignTargetCondition : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckAssignTargetInfo CheckAssignTargetInfo;
    
    UBAID_CheckAssignTargetCondition();

};


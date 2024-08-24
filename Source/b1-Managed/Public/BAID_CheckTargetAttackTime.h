#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckTargetAttackTime.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckTargetAttackTime : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ConsiSelfIsLastAttacker: 1;
    
    UBAID_CheckTargetAttackTime();

};


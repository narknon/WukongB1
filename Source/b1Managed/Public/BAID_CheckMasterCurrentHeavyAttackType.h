#pragma once
#include "CoreMinimal.h"
#include "AttackStyle.h"
#include "BAID_Base.h"
#include "BAID_CheckMasterCurrentHeavyAttackType.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckMasterCurrentHeavyAttackType : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AttackStyle CheckCurType;
    
    UBAID_CheckMasterCurrentHeavyAttackType();

};


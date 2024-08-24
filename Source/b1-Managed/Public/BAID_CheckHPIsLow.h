#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckHPIsLow.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckHPIsLow : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpLowPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoOnce: 1;
    
    UBAID_CheckHPIsLow();

};


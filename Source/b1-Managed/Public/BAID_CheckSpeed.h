#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "ValueCompareType.h"
#include "BAID_CheckSpeed.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckSpeed : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ValueCompareType CompareType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasedSpeed;
    
    UBAID_CheckSpeed();

};


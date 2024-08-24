#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckProbability.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckProbability : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UBAID_CheckProbability();

};


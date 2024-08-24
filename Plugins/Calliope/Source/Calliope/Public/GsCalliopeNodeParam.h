#pragma once
#include "CoreMinimal.h"
#include "CalliopeGuid.h"
#include "GsCalliopeNodeParam.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsCalliopeNodeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalliopeGuid NodeGuid;
    
    FGsCalliopeNodeParam();
};


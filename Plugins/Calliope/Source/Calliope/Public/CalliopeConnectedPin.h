#pragma once
#include "CoreMinimal.h"
#include "CalliopeGuid.h"
#include "CalliopeConnectedPin.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FCalliopeConnectedPin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalliopeGuid NodeGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
    FCalliopeConnectedPin();
};


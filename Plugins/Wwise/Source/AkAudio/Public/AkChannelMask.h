#pragma once
#include "CoreMinimal.h"
#include "AkChannelMask.generated.h"

USTRUCT(BlueprintType)
struct FAkChannelMask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 channelmask;
    
    AKAUDIO_API FAkChannelMask();
};


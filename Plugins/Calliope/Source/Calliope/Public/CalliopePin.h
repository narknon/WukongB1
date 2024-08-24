#pragma once
#include "CoreMinimal.h"
#include "CalliopePin.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FCalliopePin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PinToolTip;
    
    FCalliopePin();
};


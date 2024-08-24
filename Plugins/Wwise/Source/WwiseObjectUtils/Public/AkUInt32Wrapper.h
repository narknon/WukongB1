#pragma once
#include "CoreMinimal.h"
#include "AkUInt32Wrapper.generated.h"

USTRUCT(BlueprintType)
struct FAkUInt32Wrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UInt32Value;
    
    WWISEOBJECTUTILS_API FAkUInt32Wrapper();
};


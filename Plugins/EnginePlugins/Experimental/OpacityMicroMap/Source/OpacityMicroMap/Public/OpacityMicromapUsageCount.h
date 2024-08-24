#pragma once
#include "CoreMinimal.h"
#include "OpacityMicromapUsageCount.generated.h"

USTRUCT(BlueprintType)
struct FOpacityMicromapUsageCount {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Count;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SubdivisionLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Format;
    
    OPACITYMICROMAP_API FOpacityMicromapUsageCount();
};


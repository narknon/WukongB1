#pragma once
#include "CoreMinimal.h"
#include "PCGAttributeExtractorTestStructDepth2.generated.h"

USTRUCT(BlueprintType)
struct FPCGAttributeExtractorTestStructDepth2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    PCG_API FPCGAttributeExtractorTestStructDepth2();
};


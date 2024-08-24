#pragma once
#include "CoreMinimal.h"
#include "PCGAttributeExtractorTestStructDepth2.h"
#include "PCGAttributeExtractorTestStructDepth1.generated.h"

USTRUCT(BlueprintType)
struct FPCGAttributeExtractorTestStructDepth1 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributeExtractorTestStructDepth2 Depth2Struct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    PCG_API FPCGAttributeExtractorTestStructDepth1();
};


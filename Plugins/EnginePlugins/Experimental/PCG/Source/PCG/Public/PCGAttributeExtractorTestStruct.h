#pragma once
#include "CoreMinimal.h"
#include "PCGAttributeExtractorTestStructDepth1.h"
#include "PCGAttributeExtractorTestStruct.generated.h"

class UPCGAttributeExtractorTestObject;

USTRUCT(BlueprintType)
struct FPCGAttributeExtractorTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributeExtractorTestStructDepth1 DepthStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGAttributeExtractorTestObject* Object;
    
    PCG_API FPCGAttributeExtractorTestStruct();
};


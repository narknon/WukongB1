#pragma once
#include "CoreMinimal.h"
#include "RHIResourceSummaryInfo.generated.h"

USTRUCT(BlueprintType)
struct FRHIResourceSummaryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VRAMAllocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percentage;
    
    B1_API FRHIResourceSummaryInfo();
};


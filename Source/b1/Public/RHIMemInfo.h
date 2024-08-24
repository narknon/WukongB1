#pragma once
#include "CoreMinimal.h"
#include "RHIResourceSummaryInfo.h"
#include "RHIMemInfo.generated.h"

USTRUCT(BlueprintType)
struct FRHIMemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalVRAM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRHIResourceSummaryInfo> SummaryInfo;
    
    B1_API FRHIMemInfo();
};


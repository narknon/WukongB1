#pragma once
#include "CoreMinimal.h"
#include "EGSStatType.h"
#include "TraceStatResult.generated.h"

USTRUCT(BlueprintType)
struct FTraceStatResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSStatType StatType;
    
    B1_API FTraceStatResult();
};


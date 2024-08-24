#pragma once
#include "CoreMinimal.h"
#include "EDeterminismLevel.h"
#include "EPCGDataType.h"
#include "DeterminismTestResult.generated.h"

USTRUCT(BlueprintType)
struct FDeterminismTestResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TestResultTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestResultName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDataType DataTypesTested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EDeterminismLevel> TestResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlagRaised;
    
    PCG_API FDeterminismTestResult();
};


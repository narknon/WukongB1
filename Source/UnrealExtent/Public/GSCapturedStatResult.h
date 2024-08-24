#pragma once
#include "CoreMinimal.h"
#include "EGSCapturedStatType.h"
#include "GSCapturedStatResult.generated.h"

USTRUCT(BlueprintType)
struct FGSCapturedStatResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSCapturedStatType StatType;
    
    UNREALEXTENT_API FGSCapturedStatResult();
};


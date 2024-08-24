#pragma once
#include "CoreMinimal.h"
#include "GSArteriesStackParam.h"
#include "GSArteriesStackRule.generated.h"

USTRUCT(BlueprintType)
struct FGSArteriesStackRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSArteriesStackParam StackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTotalNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTotalNumber;
    
    GSEARTERIES_API FGSArteriesStackRule();
};


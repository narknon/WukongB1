#pragma once
#include "CoreMinimal.h"
#include "GSBranchFilter.generated.h"

USTRUCT(BlueprintType)
struct GSENGINEEXTENT_API FGSBranchFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendDepth;
    
    FGSBranchFilter();
};


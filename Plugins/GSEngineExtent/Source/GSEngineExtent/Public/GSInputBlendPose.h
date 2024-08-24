#pragma once
#include "CoreMinimal.h"
#include "GSBranchFilter.h"
#include "GSInputBlendPose.generated.h"

USTRUCT(BlueprintType)
struct GSENGINEEXTENT_API FGSInputBlendPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSBranchFilter> BranchFilters;
    
    FGSInputBlendPose();
};


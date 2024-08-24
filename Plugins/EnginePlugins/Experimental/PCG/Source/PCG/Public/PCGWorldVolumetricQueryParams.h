#pragma once
#include "CoreMinimal.h"
#include "PCGWorldCommonQueryParams.h"
#include "PCGWorldVolumetricQueryParams.generated.h"

USTRUCT(BlueprintType)
struct FPCGWorldVolumetricQueryParams : public FPCGWorldCommonQueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchForOverlap;
    
    PCG_API FPCGWorldVolumetricQueryParams();
};


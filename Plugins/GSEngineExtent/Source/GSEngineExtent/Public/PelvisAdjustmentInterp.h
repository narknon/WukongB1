#pragma once
#include "CoreMinimal.h"
#include "PelvisAdjustmentInterp.generated.h"

USTRUCT(BlueprintType)
struct FPelvisAdjustmentInterp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dampen;
    
    GSENGINEEXTENT_API FPelvisAdjustmentInterp();
};


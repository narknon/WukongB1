#pragma once
#include "CoreMinimal.h"
#include "EGSARTERIES_PLACEMENT_LEVEL.h"
#include "GSArteriesStackParam.generated.h"

USTRUCT(BlueprintType)
struct FGSArteriesStackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeStackedOnto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSARTERIES_PLACEMENT_LEVEL eFixToLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSARTERIES_PLACEMENT_LEVEL eCanPitchAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSARTERIES_PLACEMENT_LEVEL eCanRollAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSARTERIES_PLACEMENT_LEVEL eCanYawAt;
    
    GSEARTERIES_API FGSArteriesStackParam();
};


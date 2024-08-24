#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DonNavigationPathFindingResult.generated.h"

USTRUCT(BlueprintType)
struct FDonNavigationPathFindingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathPoints;
    
    DONAINAVIGATION_API FDonNavigationPathFindingResult();
};


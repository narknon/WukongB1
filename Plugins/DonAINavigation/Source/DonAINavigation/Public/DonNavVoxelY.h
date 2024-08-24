#pragma once
#include "CoreMinimal.h"
#include "DonNavigationVoxel.h"
#include "DonNavVoxelY.generated.h"

USTRUCT(BlueprintType)
struct FDonNavVoxelY {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDonNavigationVoxel> Z;
    
    DONAINAVIGATION_API FDonNavVoxelY();
};


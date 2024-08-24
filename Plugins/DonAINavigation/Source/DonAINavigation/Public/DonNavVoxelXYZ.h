#pragma once
#include "CoreMinimal.h"
#include "DonNavVoxelX.h"
#include "DonNavVoxelXYZ.generated.h"

USTRUCT(BlueprintType)
struct FDonNavVoxelXYZ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDonNavVoxelX> X;
    
    DONAINAVIGATION_API FDonNavVoxelXYZ();
};


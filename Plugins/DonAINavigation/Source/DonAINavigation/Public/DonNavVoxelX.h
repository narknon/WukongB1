#pragma once
#include "CoreMinimal.h"
#include "DonNavVoxelY.h"
#include "DonNavVoxelX.generated.h"

USTRUCT(BlueprintType)
struct FDonNavVoxelX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDonNavVoxelY> Y;
    
    DONAINAVIGATION_API FDonNavVoxelX();
};


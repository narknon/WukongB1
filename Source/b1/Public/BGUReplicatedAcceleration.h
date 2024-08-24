#pragma once
#include "CoreMinimal.h"
#include "BGUReplicatedAcceleration.generated.h"

USTRUCT(BlueprintType)
struct FBGUReplicatedAcceleration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AccelXYRadians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AccelXYMagnitude;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 AccelZ;
    
    B1_API FBGUReplicatedAcceleration();
};


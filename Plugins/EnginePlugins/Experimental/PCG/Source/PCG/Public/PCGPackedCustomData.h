#pragma once
#include "CoreMinimal.h"
#include "PCGPackedCustomData.generated.h"

USTRUCT(BlueprintType)
struct FPCGPackedCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCustomDataFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CustomData;
    
    PCG_API FPCGPackedCustomData();
};


#pragma once
#include "CoreMinimal.h"
#include "ISMPartition/ISMComponentDescriptor.h"
#include "PCGMeshSelectorWeightedEntry.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGMeshSelectorWeightedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftISMComponentDescriptor Descriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FPCGMeshSelectorWeightedEntry();
};


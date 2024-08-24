#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ISMPartition/ISMComponentDescriptor.h"
#include "PCGMeshInstanceList.generated.h"

USTRUCT(BlueprintType)
struct FPCGMeshInstanceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftISMComponentDescriptor Descriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Instances;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> InstancesMetadataEntry;
    
    PCG_API FPCGMeshInstanceList();
};


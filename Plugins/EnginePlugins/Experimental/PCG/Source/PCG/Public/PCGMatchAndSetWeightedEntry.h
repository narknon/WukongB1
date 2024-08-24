#pragma once
#include "CoreMinimal.h"
#include "PCGMetadataTypesConstantStruct.h"
#include "PCGMatchAndSetWeightedEntry.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGMatchAndSetWeightedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGMetadataTypesConstantStruct Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FPCGMatchAndSetWeightedEntry();
};


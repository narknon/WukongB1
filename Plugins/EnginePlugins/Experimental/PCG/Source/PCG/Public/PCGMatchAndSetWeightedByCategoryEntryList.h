#pragma once
#include "CoreMinimal.h"
#include "PCGMatchAndSetWeightedEntry.h"
#include "PCGMetadataTypesConstantStruct.h"
#include "PCGMatchAndSetWeightedByCategoryEntryList.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGMatchAndSetWeightedByCategoryEntryList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGMetadataTypesConstantStruct CategoryValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGMatchAndSetWeightedEntry> WeightedEntries;
    
    FPCGMatchAndSetWeightedByCategoryEntryList();
};


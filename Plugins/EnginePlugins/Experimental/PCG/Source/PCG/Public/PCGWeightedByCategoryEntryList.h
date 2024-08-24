#pragma once
#include "CoreMinimal.h"
#include "PCGMeshSelectorWeightedEntry.h"
#include "PCGWeightedByCategoryEntryList.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGWeightedByCategoryEntryList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGMeshSelectorWeightedEntry> WeightedMeshEntries;
    
    FPCGWeightedByCategoryEntryList();
};


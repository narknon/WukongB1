#pragma once
#include "CoreMinimal.h"
#include "PCGMeshSelectorBase.h"
#include "PCGWeightedByCategoryEntryList.h"
#include "PCGMeshSelectorWeightedByCategory.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGWeightedByCategoryEntryList> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttributeMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialOverrideAttributes;
    
    UPCGMeshSelectorWeightedByCategory();

};


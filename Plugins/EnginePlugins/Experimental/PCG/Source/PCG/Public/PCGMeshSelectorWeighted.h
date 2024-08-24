#pragma once
#include "CoreMinimal.h"
#include "PCGMeshSelectorBase.h"
#include "PCGMeshSelectorWeightedEntry.h"
#include "PCGMeshSelectorWeighted.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGMeshSelectorWeightedEntry> MeshEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttributeMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialOverrideAttributes;
    
    UPCGMeshSelectorWeighted();

};


#pragma once
#include "CoreMinimal.h"
#include "PCGContext.h"
#include "PCGStaticMeshSpawnerContext.generated.h"

USTRUCT(BlueprintType)
struct FPCGStaticMeshSpawnerContext : public FPCGContext {
    GENERATED_BODY()
public:
    PCG_API FPCGStaticMeshSpawnerContext();
};


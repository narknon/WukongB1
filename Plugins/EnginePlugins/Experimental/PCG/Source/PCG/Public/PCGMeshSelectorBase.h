#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCGMeshSelectorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGMeshSelectorBase : public UObject {
    GENERATED_BODY()
public:
    UPCGMeshSelectorBase();

};


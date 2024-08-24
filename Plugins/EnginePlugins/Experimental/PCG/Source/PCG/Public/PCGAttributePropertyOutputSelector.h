#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertySelector.h"
#include "PCGAttributePropertyOutputSelector.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGAttributePropertyOutputSelector : public FPCGAttributePropertySelector {
    GENERATED_BODY()
public:
    FPCGAttributePropertyOutputSelector();
};


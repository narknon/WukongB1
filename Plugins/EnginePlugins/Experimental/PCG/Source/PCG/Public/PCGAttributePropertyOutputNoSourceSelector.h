#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertySelector.h"
#include "PCGAttributePropertyOutputNoSourceSelector.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGAttributePropertyOutputNoSourceSelector : public FPCGAttributePropertySelector {
    GENERATED_BODY()
public:
    FPCGAttributePropertyOutputNoSourceSelector();
};


#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertySelector.h"
#include "PCGAttributePropertyInputSelector.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGAttributePropertyInputSelector : public FPCGAttributePropertySelector {
    GENERATED_BODY()
public:
    FPCGAttributePropertyInputSelector();
};


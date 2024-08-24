#pragma once
#include "CoreMinimal.h"
#include "ArteriesGroup.h"
#include "ArteriesPrimitiveGroup.generated.h"

USTRUCT(BlueprintType)
struct ARTERIES_API FArteriesPrimitiveGroup : public FArteriesGroup {
    GENERATED_BODY()
public:
    FArteriesPrimitiveGroup();
};


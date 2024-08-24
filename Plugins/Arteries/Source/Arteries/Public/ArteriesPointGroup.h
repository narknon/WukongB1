#pragma once
#include "CoreMinimal.h"
#include "ArteriesGroup.h"
#include "ArteriesPointGroup.generated.h"

USTRUCT(BlueprintType)
struct ARTERIES_API FArteriesPointGroup : public FArteriesGroup {
    GENERATED_BODY()
public:
    FArteriesPointGroup();
};


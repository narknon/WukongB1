#pragma once
#include "CoreMinimal.h"
#include "ECalliopeNodeStyle.generated.h"

UENUM(BlueprintType)
enum class ECalliopeNodeStyle : uint8 {
    Condition,
    Default,
    InOut,
    Latent,
    Logic,
    SubGraph,
    Transit,
};


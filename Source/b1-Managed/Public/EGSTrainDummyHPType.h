#pragma once
#include "CoreMinimal.h"
#include "EGSTrainDummyHPType.generated.h"

UENUM(BlueprintType)
enum class EGSTrainDummyHPType : uint8 {
    Default,
    Infinite,
    Value,
};


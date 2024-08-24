#pragma once
#include "CoreMinimal.h"
#include "NormalStiffSectorsType.generated.h"

UENUM(BlueprintType)
enum class NormalStiffSectorsType : uint8 {
    AllForward,
    ForwardAndBackward,
    FourDir,
};


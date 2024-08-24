#pragma once
#include "CoreMinimal.h"
#include "EAIElemType.generated.h"

UENUM(BlueprintType)
enum class EAIElemType : uint8 {
    Think,
    Action,
    Feature,
};


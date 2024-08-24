#pragma once
#include "CoreMinimal.h"
#include "ELMLockMode.generated.h"

UENUM(BlueprintType)
enum class ELMLockMode : uint8 {
    Normal,
    SimpleLeft,
    SimpleRight,
};


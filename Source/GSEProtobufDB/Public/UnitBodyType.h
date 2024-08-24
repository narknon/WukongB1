#pragma once
#include "CoreMinimal.h"
#include "UnitBodyType.generated.h"

UENUM(BlueprintType)
enum class UnitBodyType : uint8 {
    None,
    Small,
    Medium,
    MediumBig,
    Big,
    Huge,
};


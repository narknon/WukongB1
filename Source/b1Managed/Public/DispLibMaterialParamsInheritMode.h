#pragma once
#include "CoreMinimal.h"
#include "DispLibMaterialParamsInheritMode.generated.h"

UENUM(BlueprintType)
enum class DispLibMaterialParamsInheritMode : uint8 {
    NoInherit,
    InheritAllSameNameParams,
    InheritOverrideSameNameParams,
    CustomInheritParamsNameArray,
};


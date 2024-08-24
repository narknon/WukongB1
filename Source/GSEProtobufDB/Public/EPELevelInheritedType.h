#pragma once
#include "CoreMinimal.h"
#include "EPELevelInheritedType.generated.h"

UENUM(BlueprintType)
enum class EPELevelInheritedType : uint8 {
    None,
    MulInherited,
    BaseInherited,
};


#pragma once
#include "CoreMinimal.h"
#include "EGSAnimKBEnumBoolEasing.generated.h"

UENUM(BlueprintType)
namespace EGSAnimKBEnumBoolEasing {
    enum Type {
        GSEnd,
        GSBegin,
        GSCalc,
        GSHalf,
    };
}


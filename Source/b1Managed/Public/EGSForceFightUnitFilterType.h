#pragma once
#include "CoreMinimal.h"
#include "EGSForceFightUnitFilterType.generated.h"

UENUM(BlueprintType)
enum class EGSForceFightUnitFilterType : uint8 {
    None,
    WhiteListFilter,
    BlackListFilter,
};


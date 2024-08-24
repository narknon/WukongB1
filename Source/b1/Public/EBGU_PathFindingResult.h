#pragma once
#include "CoreMinimal.h"
#include "EBGU_PathFindingResult.generated.h"

UENUM(BlueprintType)
enum class EBGU_PathFindingResult : uint8 {
    FirstFindingSuccess,
    SecondFindingSussess,
    Fail,
};


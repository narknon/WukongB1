#pragma once
#include "CoreMinimal.h"
#include "EPS_Transaction.generated.h"

UENUM(BlueprintType)
enum class EPS_Transaction : uint8 {
    TaskFinish,
    TaskAbort,
};


#pragma once
#include "CoreMinimal.h"
#include "TransactionState.generated.h"

UENUM(BlueprintType)
enum class TransactionState : uint8 {
    Starting,
    Runing,
    Aborted,
    Finished,
};


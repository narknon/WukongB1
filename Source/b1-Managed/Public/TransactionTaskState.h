#pragma once
#include "CoreMinimal.h"
#include "TransactionTaskState.generated.h"

UENUM(BlueprintType)
enum class TransactionTaskState : uint8 {
    Init,
    Runing,
    Aborted,
    Finished,
};


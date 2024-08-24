#pragma once
#include "CoreMinimal.h"
#include "TransactionAbortReason.generated.h"

UENUM(BlueprintType)
enum class TransactionAbortReason : uint8 {
    Unknow,
    PlayerLogOut,
};


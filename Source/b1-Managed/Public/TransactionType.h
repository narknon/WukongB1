#pragma once
#include "CoreMinimal.h"
#include "TransactionType.generated.h"

UENUM(BlueprintType)
enum class TransactionType : uint8 {
    Interact,
    InteractAction,
};


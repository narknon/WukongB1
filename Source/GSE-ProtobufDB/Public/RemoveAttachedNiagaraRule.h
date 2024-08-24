#pragma once
#include "CoreMinimal.h"
#include "RemoveAttachedNiagaraRule.generated.h"

UENUM(BlueprintType)
enum class RemoveAttachedNiagaraRule : uint8 {
    Stack,
    Queue,
};


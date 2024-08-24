#pragma once
#include "CoreMinimal.h"
#include "ECalliopeActivationState.generated.h"

UENUM(BlueprintType)
enum class ECalliopeActivationState : uint8 {
    NeverActivated,
    Active,
    WasActive,
};


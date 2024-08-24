#pragma once
#include "CoreMinimal.h"
#include "InteractorState.generated.h"

UENUM(BlueprintType)
enum class InteractorState : uint8 {
    Interactive,
    NotInteractive,
};


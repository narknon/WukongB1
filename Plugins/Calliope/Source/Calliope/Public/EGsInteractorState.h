#pragma once
#include "CoreMinimal.h"
#include "EGsInteractorState.generated.h"

UENUM(BlueprintType)
enum class EGsInteractorState : uint8 {
    Interactive,
    NotInteractive,
};


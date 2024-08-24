#pragma once
#include "CoreMinimal.h"
#include "InteractorManagePolice.generated.h"

UENUM(BlueprintType)
enum class InteractorManagePolice : uint8 {
    SameAsPrevious,
    KeepInteractive,
    KeepNotInteractive,
};


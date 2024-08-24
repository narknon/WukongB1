#pragma once
#include "CoreMinimal.h"
#include "EGsInteractorManagePolice.generated.h"

UENUM(BlueprintType)
enum class EGsInteractorManagePolice : uint8 {
    SameAsPrevious,
    KeepInteractive,
    KeepNotInteractive,
};


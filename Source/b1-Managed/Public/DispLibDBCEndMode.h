#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCEndMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCEndMode : uint8 {
    AutoRelease,
    FixDuration,
    ProcedureNotity,
};


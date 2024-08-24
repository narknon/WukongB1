#pragma once
#include "CoreMinimal.h"
#include "EGSNetCloseResult.generated.h"

UENUM(BlueprintType)
enum class EGSNetCloseResult : uint8 {
    Test,
    Unknown,
    Success,
};


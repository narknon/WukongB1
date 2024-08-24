#pragma once
#include "CoreMinimal.h"
#include "ManualSplineMoveDirectionType.generated.h"

UENUM(BlueprintType)
enum class ManualSplineMoveDirectionType : uint8 {
    Free,
    Lock,
};


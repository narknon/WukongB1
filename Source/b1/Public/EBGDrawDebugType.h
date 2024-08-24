#pragma once
#include "CoreMinimal.h"
#include "EBGDrawDebugType.generated.h"

UENUM(BlueprintType)
enum class EBGDrawDebugType : uint8 {
    None,
    Movement,
    QTE,
    MAX,
};


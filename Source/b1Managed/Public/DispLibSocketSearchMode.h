#pragma once
#include "CoreMinimal.h"
#include "DispLibSocketSearchMode.generated.h"

UENUM(BlueprintType)
enum class DispLibSocketSearchMode : uint8 {
    OnlyOriginSocket,
    OnlyInterfaceSocket,
    OriginSocketPrecedence,
    InterfaceSocketPrecedence,
};


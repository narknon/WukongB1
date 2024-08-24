#pragma once
#include "CoreMinimal.h"
#include "PlayerGameMode.generated.h"

UENUM(BlueprintType)
enum class PlayerGameMode : uint8 {
    Console,
    Online,
    Party,
};


#pragma once
#include "CoreMinimal.h"
#include "ProcessUsage.generated.h"

UENUM(BlueprintType)
enum class ProcessUsage : uint8 {
    None,
    Custom,
    LevelTemplate,
    Npc,
};


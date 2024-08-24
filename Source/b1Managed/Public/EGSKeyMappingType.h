#pragma once
#include "CoreMinimal.h"
#include "EGSKeyMappingType.generated.h"

UENUM(BlueprintType)
enum class EGSKeyMappingType : uint8 {
    Comm,
    Move,
    Spell,
};


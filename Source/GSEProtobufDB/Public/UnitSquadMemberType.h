#pragma once
#include "CoreMinimal.h"
#include "UnitSquadMemberType.generated.h"

UENUM(BlueprintType)
enum class UnitSquadMemberType : uint8 {
    None,
    TeamMate,
    Captain,
    EnumMax = 255,
};


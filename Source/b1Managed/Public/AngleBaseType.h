#pragma once
#include "CoreMinimal.h"
#include "AngleBaseType.generated.h"

UENUM(BlueprintType)
enum class AngleBaseType : uint8 {
    Self2Target,
    Target2Self,
    SelfXAxis,
};


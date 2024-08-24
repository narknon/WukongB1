#pragma once
#include "CoreMinimal.h"
#include "EWwiseSoundBankType.generated.h"

UENUM(BlueprintType)
enum class EWwiseSoundBankType : uint8 {
    User,
    Event = 30,
    Bus,
};


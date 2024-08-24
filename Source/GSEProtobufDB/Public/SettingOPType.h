#pragma once
#include "CoreMinimal.h"
#include "SettingOPType.generated.h"

UENUM(BlueprintType)
enum class SettingOPType : uint8 {
    Default,
    OnOff,
    SlideStep,
    SlideContinue,
    EnumMax = 255,
};


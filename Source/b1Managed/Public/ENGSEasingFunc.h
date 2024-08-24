#pragma once
#include "CoreMinimal.h"
#include "ENGSEasingFunc.generated.h"

UENUM(BlueprintType)
enum class ENGSEasingFunc : uint8 {
    Linear,
    Step,
    SinusoidalIn,
    SinusoidalOut,
    SinusoidalInOut,
    EaseIn,
    EaseOut,
    EaseInOut,
    ExpoIn,
    ExpoOut,
    ExpoInOut,
    CircularIn,
    CircularOut,
    CircularInOut,
    BackEaseIn,
    BackEaseOut,
    BackEaseInOut,
    EaseInQuart,
    EaseInOutQuint,
    Sin,
};


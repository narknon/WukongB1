#pragma once
#include "CoreMinimal.h"
#include "EGSInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class EGSInputDeviceType : uint8 {
    Microsoft,
    Sony,
    Nintendo,
    Other,
};


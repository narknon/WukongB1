#pragma once
#include "CoreMinimal.h"
#include "EGSEnvTraceMode.generated.h"

UENUM(BlueprintType)
enum class EGSEnvTraceMode : uint8 {
    None,
    Navigation,
    CapsuleTraceByPawn,
};


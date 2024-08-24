#pragma once
#include "CoreMinimal.h"
#include "CalliopeFSMType.generated.h"

UENUM(BlueprintType)
enum class CalliopeFSMType : uint8 {
    GI_Global,
    GI_Loading,
    PS_Transaction,
};


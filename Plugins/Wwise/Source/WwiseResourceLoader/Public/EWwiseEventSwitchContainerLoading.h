#pragma once
#include "CoreMinimal.h"
#include "EWwiseEventSwitchContainerLoading.generated.h"

UENUM(BlueprintType)
enum class EWwiseEventSwitchContainerLoading : uint8 {
    AlwaysLoad,
    LoadOnReference,
};


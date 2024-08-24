#pragma once
#include "CoreMinimal.h"
#include "EBGWStreamingVolumeUsage.generated.h"

UENUM(BlueprintType)
enum class EBGWStreamingVolumeUsage : uint8 {
    Loading,
    LoadingAndVisibility,
    VisibilityBlockingOnLoad,
    BlockingOnLoad,
    LoadingNotVisible,
    MAX,
};


#pragma once
#include "CoreMinimal.h"
#include "EDownloadStatus.generated.h"

UENUM(BlueprintType)
enum class EDownloadStatus : uint8 {
    NotStarted,
    Downloading,
    Paused,
    Canceled,
    Failed,
    Succeeded,
};


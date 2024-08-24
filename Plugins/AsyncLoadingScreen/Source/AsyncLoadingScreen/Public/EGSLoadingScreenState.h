#pragma once
#include "CoreMinimal.h"
#include "EGSLoadingScreenState.generated.h"

UENUM(BlueprintType)
enum class EGSLoadingScreenState : uint8 {
    Idle,
    SlateThreadUpdating,
    GameThreadWaitingMovieFinish,
    MainThreadUpdating,
};


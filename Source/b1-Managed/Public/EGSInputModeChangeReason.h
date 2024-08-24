#pragma once
#include "CoreMinimal.h"
#include "EGSInputModeChangeReason.generated.h"

UENUM(BlueprintType)
enum class EGSInputModeChangeReason : uint8 {
    Unknown,
    Init,
    UI,
    GM,
    MiniGM,
    ReportBug,
    ExceptionPanel,
    DataValidate,
    WXLogin,
    BP_GMActor_GMPanel,
    BP_GMActor_ZBBPanel,
    BP_GMActor_OCEAN,
    Reset,
    PreLoadMap,
    Replay,
    LoadingScreenPreview,
};


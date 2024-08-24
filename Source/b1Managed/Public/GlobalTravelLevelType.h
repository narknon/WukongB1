#pragma once
#include "CoreMinimal.h"
#include "GlobalTravelLevelType.generated.h"

UENUM(BlueprintType)
enum class GlobalTravelLevelType : uint8 {
    None,
    Unknown,
    Generic,
    StartNewGame,
    StartNewGamePlus,
    BackToMainMenu,
    ReadArchive,
    GMTravel,
    Online,
    GameLevelPass,
    GameIntent,
    WXLoginFinish,
    SetConfigFinish,
    BackToMainMenuByPlayGo,
    Nianhui,
    BenchMark,
    SeamlessStartNewGame,
    BackToMainMenuFullBlack,
};


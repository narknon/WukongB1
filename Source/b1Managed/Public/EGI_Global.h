#pragma once
#include "CoreMinimal.h"
#include "EGI_Global.generated.h"

UENUM(BlueprintType)
enum class EGI_Global : uint8 {
    WXLogin,
    ToiletStandAlone,
    StartUp,
    LoadArchive,
    StartNewGame,
    GameLevelPassFinal,
    GameLevelPass,
    ToiletListenServer,
    ToiletDedicateServer,
    ToiletClient,
    UnKnowLevelTravel,
    BackToMainMenu,
    WXLoginSuccess,
    ReplayBattle,
    TravelToNextChapter,
    PreviewSeq,
    PartyRoomServer,
    PartyRoomClient,
    ClientDisconnect,
    BackToStandAlone,
    QuickMonsterTeleport,
    StartNewGamePlus,
    Demo820ReSetData,
    BackToMainMenuByPlayGo,
    ReadArchiveFailed,
    BenchMark,
    GMLevelTravel,
};


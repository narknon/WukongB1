#pragma once
#include "CoreMinimal.h"
#include "ArchiveSaveSource.generated.h"

UENUM(BlueprintType)
enum class ArchiveSaveSource : uint8 {
    ArchiveSaveV1 = 1,
    RoleDataMerge,
    PushTaskStageSuccess,
    PlayerDead,
    BossOrEliteDead,
    SeqPlayFinished,
    BackToMainMenu,
    TeleportFinish,
    Console,
    Interact,
    NewGamePlus,
    ReSet820Data,
    TravelLevel,
    ExitGame,
};


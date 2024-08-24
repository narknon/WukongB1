#pragma once
#include "CoreMinimal.h"
#include "ScreenMsgType.generated.h"

UENUM(BlueprintType)
enum class ScreenMsgType : uint8 {
    PlayerDead,
    DeadCountChange,
    TriggerLevelEvent,
    UseLevelItem,
    TeamerDisconnected,
    Connecting,
    TeamerConnecting,
    TeamerConnected,
    TeamerJoin,
};


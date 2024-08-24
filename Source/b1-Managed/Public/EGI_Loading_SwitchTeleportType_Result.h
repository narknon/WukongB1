#pragma once
#include "CoreMinimal.h"
#include "EGI_Loading_SwitchTeleportType_Result.generated.h"

UENUM(BlueprintType)
enum class EGI_Loading_SwitchTeleportType_Result : uint8 {
    TeleportToSameLevel,
    TravelLevelToSamePlayerGameMode,
    TravelLevelToParty,
    TravelLevelToConsole,
};


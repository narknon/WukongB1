#pragma once
#include "CoreMinimal.h"
#include "TargetLevelNetType.generated.h"

UENUM(BlueprintType)
enum class TargetLevelNetType : uint8 {
    MainMenu,
    StandAlone,
    ListenServer,
    Client,
    Other,
};


#pragma once
#include "CoreMinimal.h"
#include "ClientTamerInitNetState.generated.h"

UENUM(BlueprintType)
enum class ClientTamerInitNetState : uint8 {
    Dead,
    UnLoaded,
};


#pragma once
#include "CoreMinimal.h"
#include "EGSInputTab.generated.h"

UENUM(BlueprintType)
enum class EGSInputTab : uint8 {
    Comm,
    Battle,
    System,
    Other,
};


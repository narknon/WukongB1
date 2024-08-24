#pragma once
#include "CoreMinimal.h"
#include "PlayerFreeCameraType.generated.h"

UENUM(BlueprintType)
enum class PlayerFreeCameraType : uint8 {
    None,
    AutoTrail,
    G4Mode,
    SeqMatch,
};


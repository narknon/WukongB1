#pragma once
#include "CoreMinimal.h"
#include "EOSS_CharacterType.generated.h"

UENUM(BlueprintType)
enum class EOSS_CharacterType : uint8 {
    None,
    Player,
    Monster,
    AiPartner,
};


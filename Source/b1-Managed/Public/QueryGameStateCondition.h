#pragma once
#include "CoreMinimal.h"
#include "QueryGameStateCondition.generated.h"

UENUM(BlueprintType)
enum class QueryGameStateCondition : uint8 {
    None,
    HasArchive,
    IsDebug,
    NoArchive,
    NotInDebug,
    SeamlessStartNewGame,
    GenericStartNewGame,
};


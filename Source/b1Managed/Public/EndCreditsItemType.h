#pragma once
#include "CoreMinimal.h"
#include "EndCreditsItemType.generated.h"

UENUM(BlueprintType)
enum class EndCreditsItemType : uint8 {
    None,
    Text,
    Image,
    Item,
    Page,
};


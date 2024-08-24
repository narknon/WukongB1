#pragma once
#include "CoreMinimal.h"
#include "CollectionInteractType.generated.h"

UENUM(BlueprintType)
enum class CollectionInteractType : uint8 {
    Item,
    Normal,
    Plus,
    Chief,
};


#pragma once
#include "CoreMinimal.h"
#include "AssociationUnitActiveType.generated.h"

UENUM(BlueprintType)
enum class AssociationUnitActiveType : uint8 {
    ActiveImmediately,
    NoActive,
};


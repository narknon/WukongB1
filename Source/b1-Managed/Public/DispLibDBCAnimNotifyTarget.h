#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCAnimNotifyTarget.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCAnimNotifyTarget : uint8 {
    None,
    Self,
    EnemyTarget,
};


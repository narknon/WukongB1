#pragma once
#include "CoreMinimal.h"
#include "ChildActorFilterType.generated.h"

UENUM(BlueprintType)
enum class ChildActorFilterType : uint8 {
    Socket,
    ResId,
    NickName,
    Buff,
    All,
};


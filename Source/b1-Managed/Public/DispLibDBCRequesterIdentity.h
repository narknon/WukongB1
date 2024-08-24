#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCRequesterIdentity.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCRequesterIdentity : uint8 {
    Notify,
    NotifyState,
    UENativeComp,
    GSECS_BUSComp,
    GSECS_BWSComp,
    DBCDataAsset,
};


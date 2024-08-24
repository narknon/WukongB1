#pragma once
#include "CoreMinimal.h"
#include "SocketMatchTamerType.generated.h"

UENUM(BlueprintType)
enum class SocketMatchTamerType : uint8 {
    Prefix,
    Full,
};


#pragma once
#include "CoreMinimal.h"
#include "FUStGlobalConfigType.generated.h"

UENUM(BlueprintType)
enum class FUStGlobalConfigType : uint8 {
    Int,
    Float,
    EgsyesNo,
    String,
};


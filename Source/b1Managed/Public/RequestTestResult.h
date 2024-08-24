#pragma once
#include "CoreMinimal.h"
#include "RequestTestResult.generated.h"

UENUM(BlueprintType)
enum class RequestTestResult : uint8 {
    FeatureNotFound,
    NoNeedToTest,
    SelectFaild,
    SelectSuccess,
};


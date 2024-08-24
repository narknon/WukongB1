#pragma once
#include "CoreMinimal.h"
#include "ELogVerbosity_JS.generated.h"

UENUM(BlueprintType)
enum class ELogVerbosity_JS : uint8 {
    NoLogging,
    Fatal,
    Error,
    Warning,
    Display,
    Log,
    Verbose,
    VeryVerbose,
};


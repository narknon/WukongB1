#pragma once
#include "CoreMinimal.h"
#include "JavascriptCpuProfiler.generated.h"

USTRUCT(BlueprintType)
struct FJavascriptCpuProfiler {
    GENERATED_BODY()
public:
    V8_API FJavascriptCpuProfiler();
};


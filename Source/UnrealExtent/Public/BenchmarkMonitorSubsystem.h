#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "BenchmarkMonitorSubsystem.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UBenchmarkMonitorSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UBenchmarkMonitorSubsystem();

};


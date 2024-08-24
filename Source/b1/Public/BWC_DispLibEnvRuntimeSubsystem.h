#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "Interface_DispLibEnvSubsystem.h"
#include "BWC_DispLibEnvRuntimeSubsystem.generated.h"

UCLASS(Blueprintable)
class UBWC_DispLibEnvRuntimeSubsystem : public UEngineSubsystem, public IInterface_DispLibEnvSubsystem {
    GENERATED_BODY()
public:
    UBWC_DispLibEnvRuntimeSubsystem();


    // Fix for true pure virtual functions not being implemented
};


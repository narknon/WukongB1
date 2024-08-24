#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PCGSubsystem.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPCGSubsystem();

};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GSNavigationWorldSubsystem.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSNavigationWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UGSNavigationWorldSubsystem();

};


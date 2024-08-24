#pragma once
#include "CoreMinimal.h"
#include "Engine/NetDriver.h"
#include "B1NetDriverForStandAloneHookBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class UB1NetDriverForStandAloneHookBase : public UNetDriver {
    GENERATED_BODY()
public:
    UB1NetDriverForStandAloneHookBase();

};


#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "FoliageInteractiveVolume.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API AFoliageInteractiveVolume : public ATriggerBox {
    GENERATED_BODY()
public:
    AFoliageInteractiveVolume(const FObjectInitializer& ObjectInitializer);

};


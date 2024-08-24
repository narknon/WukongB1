#pragma once
#include "CoreMinimal.h"
#include "WaterBodyRiverActor.h"
#include "GSEWaterBodyRiver.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API AGSEWaterBodyRiver : public AWaterBodyRiver {
    GENERATED_BODY()
public:
    AGSEWaterBodyRiver(const FObjectInitializer& ObjectInitializer);

};


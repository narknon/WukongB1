#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BGUPerformerControlDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUPerformerControlDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBGUPerformerControlDataComp(const FObjectInitializer& ObjectInitializer);

};


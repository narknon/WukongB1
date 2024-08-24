#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_DynamicSDFDataProcessBaseDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DynamicSDFDataProcessBaseDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_DynamicSDFDataProcessBaseDataComp(const FObjectInitializer& ObjectInitializer);

};


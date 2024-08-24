#pragma once
#include "CoreMinimal.h"
#include "BUS_FlowDataComp.h"
#include "BUS_SpawnCollectionDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SpawnCollectionDataComp : public UBUS_FlowDataComp {
    GENERATED_BODY()
public:
    UBUS_SpawnCollectionDataComp(const FObjectInitializer& ObjectInitializer);

};


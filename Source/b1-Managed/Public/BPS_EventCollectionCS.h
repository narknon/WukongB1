#pragma once
#include "CoreMinimal.h"
#include "BUS_EventCollection.h"
#include "BPS_EventCollectionCS.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBPS_EventCollectionCS : public UBUS_EventCollection {
    GENERATED_BODY()
public:
    UBPS_EventCollectionCS(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "BUS_EventCollection.h"
#include "BGS_EventCollectionCS.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGS_EventCollectionCS : public UBUS_EventCollection {
    GENERATED_BODY()
public:
    UBGS_EventCollectionCS(const FObjectInitializer& ObjectInitializer);

};


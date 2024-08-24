#pragma once
#include "CoreMinimal.h"
#include "BUS_InteractiveActorDataComp.h"
#include "BUS_TaskCollectiontDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TaskCollectiontDataComp : public UBUS_InteractiveActorDataComp {
    GENERATED_BODY()
public:
    UBUS_TaskCollectiontDataComp(const FObjectInitializer& ObjectInitializer);

};


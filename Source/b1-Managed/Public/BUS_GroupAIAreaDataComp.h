#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_GroupAIAreaDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GroupAIAreaDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_GroupAIAreaDataComp(const FObjectInitializer& ObjectInitializer);

};


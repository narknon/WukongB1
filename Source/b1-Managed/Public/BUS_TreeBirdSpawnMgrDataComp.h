#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_TreeBirdSpawnMgrDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TreeBirdSpawnMgrDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_TreeBirdSpawnMgrDataComp(const FObjectInitializer& ObjectInitializer);

};


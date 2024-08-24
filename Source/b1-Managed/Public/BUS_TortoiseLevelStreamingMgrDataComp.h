#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_TortoiseLevelStreamingMgrDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TortoiseLevelStreamingMgrDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_TortoiseLevelStreamingMgrDataComp(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_ForceOriginalFormDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ForceOriginalFormDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_ForceOriginalFormDataComp(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_UnitTeamMngDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_UnitTeamMngDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_UnitTeamMngDataComp(const FObjectInitializer& ObjectInitializer);

};


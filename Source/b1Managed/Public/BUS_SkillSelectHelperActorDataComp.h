#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BUS_SkillSelectHelperActorDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SkillSelectHelperActorDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBUS_SkillSelectHelperActorDataComp(const FObjectInitializer& ObjectInitializer);

};

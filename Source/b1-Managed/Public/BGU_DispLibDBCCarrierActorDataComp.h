#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "BGU_DispLibDBCCarrierActorDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGU_DispLibDBCCarrierActorDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UBGU_DispLibDBCCarrierActorDataComp(const FObjectInitializer& ObjectInitializer);

};


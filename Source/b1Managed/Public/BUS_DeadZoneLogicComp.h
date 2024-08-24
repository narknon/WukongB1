#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_DeadZoneLogicComp.generated.h"

UCLASS(Blueprintable)
class UBUS_DeadZoneLogicComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_DeadZoneLogicComp();

private:
    UFUNCTION(BlueprintCallable)
    void PlayerCliffFallRollBack();
    
};


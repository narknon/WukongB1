#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ActorCompBaseUObj.h"
#include "BUS_PlayerApproachedNotifyComp.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_PlayerApproachedNotifyComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_PlayerApproachedNotifyComp();

private:
    UFUNCTION(BlueprintCallable)
    void PlayerApproached_BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
    
};

